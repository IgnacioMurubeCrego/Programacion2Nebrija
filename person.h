#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person
{
private:
    string name;
    int age;
    string phoneNumber;
public:
    Person(){
        setName("");
        setAge(0);
        setPhoneNumber("");
    };
    Person(string _name, int _age, string _phoneNumber){
        if(_age < 0)
            throw string{_name + "'s age must be >= 0 years."};
        else if (_phoneNumber.length() != 9)
            throw string{_name + "'s phone number must have exactly 9 digits ."};

        name = _name;
        age = _age;
        phoneNumber = _phoneNumber;
    }

    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    string getPhoneNumber(){
        return phoneNumber;
    }

    void setName(string _name){
        name = _name;
    }

    void setAge(int _age){
        age = _age;
    }

    void setPhoneNumber(string _phoneNumber){
        phoneNumber = _phoneNumber;
    }

    void print(){
        cout << "--------------------------------------------------------\n";
        cout << "Name : " << getName() << "\n"
                << "Age : " << getAge() << "\n"
                   << "Phone Number : " << getPhoneNumber() << "\n";
        cout << "--------------------------------------------------------\n";
    }
};

#endif // PERSON_H
