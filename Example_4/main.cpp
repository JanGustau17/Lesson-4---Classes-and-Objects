/*
Name: Mukhammadali Yuldoshev
Course: CSCI 272
Lesson Number: Lesson 4 
Code Topic: Constructors
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
        Car() {
            //default constructor
        }
        
        Car(string b, string m, int y){ //parameterized constructor
            brand =b; model = m, year = y;
        }
        
        Car(const Car & other){
            brand = other.brand; model = other.model; year = other.year;
        }
        
        void startEngine(){
            cout << "\n ---- Engine started ---- \n";
            cout << "Brand: " << brand << " | Model: " << model << " | Year:" << year << endl;
        }
};




int main(){
    Car car1; //default
    Car car2("Tesla", "X", 2022); //parameterized
    Car car3(car2); //copy
    
    Car* pCar1 = new Car; //default
    Car* pCar2 = new Car("Tesla", "X", 2022);
    
    Car car[20]; //default (array, 20 copies of original/default car)
    
    car1.startEngine();
    car2.startEngine();
    car3.startEngine();    
    
    
    pCar1 -> startEngine();
    pCar2 -> startEngine();
    
    car[0].startEngine(); //value of car[20]'s first element
    
    return 0;
}






/*
Reflection:
1. What I understood:
From this example, the difference of Constructors

2. Difficulties:
"Why in the world, slide's explanations are a bit hard to undersand (in my experience, of course)". I prefer plain English. I know I am in academic sphere,
but that coule be done different

3. Research:
I researched about using pointers and new variable in this type of case scenarios and its importance.
     - came up with answer: Stack & Heap memory. 
     - Stack -> limited, and gets deleted after operation is done
     - Heap -> fully controled and won't get disapperead. No limits

4. AI Usage:
"I asked Claude to teach me Contructors like I am 5 years old", including with examples. Of course I paid my attention during the class, but slides a bit hard to catch the objective.

5. What I learned:
Using pointer and "new variable" crate new allocation which gives more freedom over the data. It's not just copying the default data, but addressing and accessing it
    - default: keeps its data private
    - parameterized: has access to the private variables only after assigning the new variables to them
    - copy: gets its values by copying values from other created objects and plugs it to the private variable
*/





