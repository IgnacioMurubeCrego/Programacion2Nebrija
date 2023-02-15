#ifndef LISTIN_H
#define LISTIN_H
#include <iostream>
#include <vector>
#include "person.h"

using namespace std;

class Listin
{
private:
    vector<Person> listin;
public:
    Listin(){
        listin = {};
    };

    void add(Person p){
        for(Person person : listin)
            if(person.getName() == p.getName())
                throw string{p.getName() + " ya se encuentra registrada."};

        listin.push_back(p);
        cout << p.getName() << " has been added to the list." << endl;
    }

    void printList(){
        cout << "--------------------------------------------------------\n";
        cout << "PERSON LIST:" << "\n";
        cout << "--------------------------------------------------------\n";

        for(Person p : listin){
            p.print();
        }
    }

    Person findName(string name){
        for(Person person : listin)
            if(person.getName() == name)
                return person;
        return Person();
    }

    void printAgeList(int age){
        cout << "--------------------------------------------------------\n";
        cout << "PERSON LIST with AGE : " << age << "\n";
        cout << "--------------------------------------------------------\n";
        for(Person person : listin)
            if(person.getAge() == age)
                person.print();
    }
};

#endif // LISTIN_H
