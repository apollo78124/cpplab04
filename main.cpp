#include <iostream>
#include "header.hpp"

using namespace std;

int main()
{
    Animal a{7, 8, 9};
    Bird b{34, 12, 34, 56};
    Canine c{12, 52, 12};
    Animal *a1 = &a;
    Animal *a2 = &b;
    Animal *a3 = &c;

    cout << "\n\n";
    cout << *a1;
    a1->sleep();
    a1->eat();
    a1->move(4, 5);
    cout << *a1;

    cout << "\n\n";
    cout << *a2;
    a2->sleep();
    a2->eat();

    dynamic_cast<Bird *>(a2)->move(1, 5, 7);
    cout << *a2;

    cout << "\n\n";
    cout << *a3;
    a3->sleep();
    a3->eat();
    a3->move(1, 5);
    dynamic_cast<Canine *>(a3)->hunt();
    cout << *a3;
    cout << "\n\n";

    return 0;
}