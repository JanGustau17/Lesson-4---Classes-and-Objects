/*
Name: Mukhammadali Yuldoshev
Course: CSCI 272
Lesson Number: Lesson 4 
Code Topic: Copy Constructor Example
Date: 3/3/2026
*/


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
    
    return 0;
}




/*
Reflection:
1. What I understood:
From this example I understood that data members split into 2 member functions:
    - private
    - public

2. Difficulties:
I forgot calling int main() to run whatever Class is holding it.

3. Research:
I researched importance and use case of private functions:
    - just in Bank account scenario, if data givin inside of Class is public that can be easily modified by users.
    - for that reason I understood why private and protected functions are called "GATEKEEPERS"

4. AI Usage:
I used Claude to get feedback for my Reflection.

5. What I learned:
I learned that using private data (encapsulation) is critical.
*/
