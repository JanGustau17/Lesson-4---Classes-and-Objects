/*
Name: Mukhammadali Yuldoshev
Course: CSCI 272
Lesson Number: Lesson 4 
Code Topic: Copy Constructor Example
Date: 03/03/2026
*/


#include <iostream>
using namespace std;

class Person{
    private: //in the slide it's given as public (which I think it's wrong or mistakenly used)
        string name{"Maksi"};
        int age{29};
        char gender{'M'};
        
    public:
        void introduce(){
            cout << "Hello, I am " << name << ". I am " << age << " y.o. ";
            
            if (gender == 'M') {
                cout << "I'm a male." << endl;
            } else if (gender == 'F') {
                cout << "I'm a female." << endl;
            } else {
                cout << "Gender unspecified." << endl;
            }
        }
    
};



int main(){
    Person person1;
    person1.introduce();

    
    return 0;
}




/*
Reflection:
1. What I understood:
From this example I understood that defult names, numbers of the object can be directly given within the private function

2. Difficulties:
Keep trying to understand as public function given twice in the example, whether it was correct or not. When I asked Claude, it told me that code won't give any error

3. Research:
After testing double-usage of public functions, it worked out without any error. But it's not safe & proper approach.

4. AI Usage:
Claude clearly explanied the method that I mentioned above.

5. What I learned:
I learned how data members (attributes) can be called in public's introduce function and printed in the main.cpp file.
*/


