/*
Name: Mukhammadali Yuldoshev
Course: CSCI 272
Lesson Number: Lesson 4 
Code Topic: Copy Constructor Example
Date: 03/03/2026
*/


#include <iostream>
using namespace std;

class Car {
    private:
        string brand{"Rolls-Royce"};
        string model{"Phantom"};
        int year {2026};
        
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

    return 0;
}




/*
Reflection:
1. What I understood:
From this example I understood that class can be created in outside of the main cpp file
    - in order to prevent from messy/bulk Code

2. Difficulties:
N/A, yet I forgot that "iostream and std" could be called in the header file

3. Research:
I found out that there is also another cpp file can be used which I started calling "kitchen":
    - let's say Cars skeleton can be built in headers, and before going into the main.cpp we can create new
    Porsche.cpp file which cars design differentiate from others brands. And then in the main.cpp file based on users input
    that brands can further be modified or choosen. This approach is effective when working on multiple objects with different builts

4. AI Usage:
Claude clearly explanied the method that I mentioned above.

5. What I learned:
I learned how importing files works and how to call them in the main.cpp 
*/



