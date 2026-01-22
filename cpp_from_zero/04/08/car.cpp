#include <iostream>
using namespace std;

class Car {
    private:
        int speed;
    
    public:
        Car() : speed(0) {}
    
        void speedUp(){
            if (speed < 80) {
                speed++;
            }
        }

        void speedDown() {
            if (speed > 0) {
                speed--;
            }
        }

        int getSpeed() const {
            return speed;
        }
};

int main() {
    Car c;
    cout << c.getSpeed() << endl;

    for (int i = 0; i < 100; i++) {
        c.speedUp();
    }
    cout << c.getSpeed() << endl;
    
    for (int i = 0; i < 20; i++) {
        c.speedDown();
    }
    cout << c.getSpeed() << endl;

    return 0;
}
