#include <iostream>
#include "person.h"

int main() {
    Person p1;
    Person p2("Jose Perez");
    Person p3 = p2; // Constructor copia
    Person p4 ;     // Constructor por default
    p4 = p3;        // Asignacion copia

    std::cout << p2.get_name() << std::endl;
    return 0;
}
