#include <iostream>
#include "person.h"
#include "listin.h"

using namespace std;

int main()
{
    Listin list;
    Person p1;
    Person p2;
    Person p3;
    try {
        p1 = Person("Maria de las Nieves",17,"547896319");
        p2 = Person("Raul Esquerdo",19,"789546213");
        p3 = Person("Juan de Campo",19,"456789123");
        }
    catch (string errMsg) {
        cout << "--------------------------------------------------------\n";
        cout << "Error : " << errMsg << "\n";
        cout << "--------------------------------------------------------\n";
        return 1;
    }

    list.add(p1);
    list.add(p2);
    list.add(p3);
    list.printList();
    list.printAgeList(19);
    return 0;
}
