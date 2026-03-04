/*
Name: Mukhammadali Yuldoshev
Course: CSCI 272
Lesson Number: Lesson 4 
Code Topic: Destructors
Date: 03/03/2026
*/


#include <iostream>
using namespace std;

class Car{
    private:
        string brand{"Volkswagen"};
        string model="Polo";
        int year{2012};
        
    public:
    
        ~Car(){ //desctructor (starting with "tilde char")
            cout << "\nObject is destroyed" << endl;
        }
    
        Car() {
            //default constructor
        }
        
        Car(string b, string m, int y){ //parameterized constructor
            brand =b; model = m, year = y;
        }
        
        Car(const Car & other){ //copy
            brand = other.brand; model = other.model; year = other.year;
        }
        
        void startEngine(){
            cout << "\n ---- Engine started ---- \n";
            cout << "{Brand: " << brand << " | Model: " << model << " | Year:" << year << "}" <<endl;
        }
};



int main(){
    Car car1; //default
    Car car2("Tesla", "X", 2022); //parameterized
    Car car3(car2); //copy
    
    
    car1.startEngine();
    car2.startEngine();
    car3.startEngine();    
    
    //desctuctor automatically functions after car1, car2, and car3 being executed
    return 0;
}


/*
Reflection:
1. What I understood:
Must use character tile (~)

2. Difficulties:
N/A

3. Research:
N/A

4. AI Usage:
N/A

5. What I learned:
    Destroyers are important and avoids data leaks, cleans up the storage as soon as the operation is done
    no return type and parameters are needed
*/