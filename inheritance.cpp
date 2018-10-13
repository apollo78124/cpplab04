//
//// Created by dldms on 10/12/2018.
////
#include <iostream>
#include "header.hpp"

using namespace std;

class Animal
{
protected:
    int age;
    static long id;
    bool alive;
    double x;
    double y;
public:
    Animal ()
    { cout << "Animal default const\n";
        age = 0;
        id = 0;
        alive = 0;
        x = 0; // x axis location
        y = 0; // y axis location
    }
    Animal (int a, double b, double c)
    { cout << "Animal parameter const\n";
        age = a;
        x = b;
        y = c;

        id = 0;
        alive = 0;

    }

    virtual void move(double a, double b) {
        cout << "animal move\n";
        x = a;
        y = b;
    }

    Animal(Animal& a) {
        cout << "Animal copy constructor.\n";
        *this = a;
    }

    virtual ~Animal()
    { cout<<"Virtual Destruct animal \n"; }

    virtual void sleep() {
        cout << "animal sleep\n";

    }

    virtual void eat() {
        cout << "eat\n";

    }

    friend ostream& operator<< (std::ostream& stream, const Animal& a1) {
        cout << "Overload insertion operator.\n";
    }
};

class Bird : public Animal
{
private:

    double z;
public:
    Bird () {
        cout << "Bird default const\n";
        age = 0;
        id = 0;
        alive = 0;
        x = 0; // x axis location
        y = 0; // y axis location
    }

    Bird (int a, double b, double c, double d)
    { cout << "Bird parameter const\n";
        age = a;
        x = b;
        y = c;
        z = d;
        id = 0;
        alive = 0;

    }
};