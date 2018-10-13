#include <iostream>
#include "header.hpp"

using namespace std;

int main()
{
    Animal *a1 = new Animal();
    Animal *b1 = new Bird();
    Animal *c1 = new Canine();

    *a1.move(3.1, 4.1, 5.1);
    *b1.move(3.1, 4.1, 5.1);
    *c1.move(3.1, 4.1, 5.1);

    *a1.eat();
    *b1.eat();
    *c1.eat();

    *a1.sleep();
    *b1.sleep();
    *c1.sleep();

    *c1.hunt();

}