//
//// Created by dldms on 10/12/2018.
////

#include <iostream>
#include "header.hpp"

using namespace std;

    Animal::Animal ()
    { cout << "Animal default const\n";
        age = 0;
        alive = 0;
        x = 0; // x axis location
        y = 0; // y axis location
    }
Animal::Animal (int a, double b, double c)
    { cout << "Animal parameter const\n";
        age = a;
        x = b;
        y = c;

        alive = 0;

    }

void Animal::move(double a, double b) {
        cout << "animal move\n";
        x = a;
        y = b;
    }

Animal::Animal(Animal& a) {
        cout << "Animal copy constructor.\n";
        *this = a;
    }

Animal::~Animal()
    { cout<<"Virtual Destruct animal \n"; }

void Animal::sleep() {
        cout << "animal sleep\n";

    }

void Animal::eat() {
        cout << "Animal eat\n";

    }


ostream &operator<<(std::ostream &stream, const Animal &a1) {
    cout << "Overload insertion operator.\n";
}



    Bird::Bird () {
        cout << "Bird default const\n";
        age = 0;

        alive = 0;
        x = 0; // x axis location
        y = 0;
        z = 0;// y axis location
    }

Bird::Bird (int a, double b, double c, double d)
    { cout << "Bird parameter const\n";
        age = a;
        x = b;
        y = c;
        z = d;
        alive = 0;

    }

    void Bird::move(double a, double b, double c) {
        cout << "Bird move\n";
        x = a;
        y = b;
        z = c;
    }

Bird::Bird(Bird& a) {
        cout << "Bird copy constructor.\n";
        *this = a;
    }

Bird::~Bird()
    { cout<<"Virtual Destruct Bird \n"; }

    void Bird::sleep() {
        cout << "Bird sleep\n";
    }

    void Bird::eat() {
        cout << "Bird eat\n";
    }

    ostream& operator<< (std::ostream& stream, const Bird& a1) {
        cout << "Bird Overload insertion operator.\n";
    }




Canine::Canine() {
        cout << "Canine default const\n";
        age = 0;
        alive = 0;
        x = 0; // x axis location
        y = 0; // y axis location
    }

Canine::Canine(int a, double b, double c) {
        cout << "Canine parameter const\n";
        age = a;
        x = b;
        y = c;
        alive = 0;

    }

    void Canine::move(double a, double b) {
        cout << "Canine move\n";
        x = a;
        y = b;
    }

Canine::Canine(Canine& a) {
        cout << "Canine copy constructor.\n";
        *this = a;
    }

    Canine::~Canine() { cout << "Virtual Destruct Canine \n"; }

    void Canine::sleep() {
        cout << "Canine sleep\n";
    }

    void Canine::eat() {
        cout << "Canine eat\n";
    }

    void Canine::hunt() {
        cout << "Canine hunt\n";
    }

    ostream &operator<<(std::ostream &stream, const Canine &a1) {
        cout << "Canine Overload insertion operator.\n";
    }

