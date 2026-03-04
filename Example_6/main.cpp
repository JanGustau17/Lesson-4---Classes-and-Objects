/*
Name: Mukhammadali Yuldoshev
Course: CSCI 272
Lesson Number: Lesson 4 
Code Topic: Encapsulation
Date: 03/03/2026
*/



#include <iostream>
#include <string>

class User {
    private:
        std::string username;
        std::string password;

    public:
        User(const std::string& uname, const std::string& pwd) {
            username = uname;
            password = pwd;
    }

    bool login(const std::string& inputUser, const std::string& inputPwd) const {
        return (inputUser == username) & (inputPwd == password);
    }

    void updatePassword(const std::string& newPwd) {
        password = newPwd;
    }
};



class BankAccount {
    private:
        double balance;

    public:
    // Public methods for controlled access
        void deposit(double amount) {
            balance += amount;
        }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        }
    }
};


int main() {
    User user1("Mukhammadali", "1234");
    
    // test login
    if (user1.login("Mukhammadali", "1234")) {
        std::cout << "Login successful!" << std::endl;
    } else {
        std::cout << "Login failed!" << std::endl;
    }
    
    // test update password
    user1.updatePassword("newpass456");
    std::cout << "Password updated!" << std::endl;
    
    
    
    BankAccount account;
    
    account.deposit(1000);
    std::cout << "Deposited $1000" << std::endl;
    
    account.withdraw(500);
    std::cout << "Withdrew $500" << std::endl;
    
    account.withdraw(9999);
    std::cout << "Tried to withdraw $9999 - blocked!" << std::endl;
    
    
    return 0;
}




/*
Reflection:
1. What I understood:
Encapculation protects data, which is private and can't be changed from outside the class

2. Difficulties:
N/A

3. Research:
N/A

4. AI Usage:
Used Claude to see how methods and concepts work 

5. What I learned:
    withdraw() function: where if statement is useful to prevent error value
*/
