#include <iostream>
using namespace std;

class Person {
    public:
        virtual void work() {
            cout << "I'm a Person. I'm working." << endl;
        }
};

class Student : public Person {
    public:
        void work() override {
            cout << "I'm a Student. I'm studying." << endl;
        }
};

class Teacher : public Person {
    public:
        void work() override {
            cout << "I'm a Teacher. I'm teaching." << endl;
        }
};

void execute_work(Person& p) {
    p.work();
}

int main() {
    Person person;
    Student student;
    Teacher teacher;

    cout << "try running `execute_work()`" << endl;
    execute_work(person);
    execute_work(student);
    execute_work(teacher);

    cout << "Try running `work()` directly" << endl;
    person.work();
    student.work();
    teacher.work();

    return 0;
}
