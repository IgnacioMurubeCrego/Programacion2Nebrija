#include <iostream>
#include "person.h"
#include "listin.h"

using namespace std;

int main()
{
    Listin list;
    Person p1;
    Person p2;
    try {
        Person p1("Maria de las Nieves",17,"547896319");
        p1.print();
        Person p2("Raul Esquerdo",19,"789546213");
    } catch (string errMsg) {
        cout << "--------------------------------------------------------\n";
        cout << "Error : " << errMsg << "\n";
        cout << "--------------------------------------------------------\n";
        return 1;
    }

    list.add(p1);
    list.add(p2);
    list.printList();
    return 0;
}
