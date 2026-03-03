#include <iostream>
using namespace std;


class Car {
    private:
        string brand;
        string model;
        int year;
        
    public:
        void startEngine(){
            cout << "Engine started." << endl;
        }
        
        void accelerate(){
            cout << "Car accelerated.";
        }
};

int main(){
    Car car1;
    car1.startEngine();
    car1.accelerate();
}
