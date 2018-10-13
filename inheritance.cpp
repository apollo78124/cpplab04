//
//// Created by dldms on 10/12/2018.
////

#include <iostream>
#include "header.hpp"

using namespace std;


Animal {
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
        cout << "Animal eat\n";

    }

    friend ostream& operator<< (std::ostream& stream, const Animal& a1) {
        cout << "Overload insertion operator.\n";
    }
};

Bird : public Animal
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
        y = 0;
        z = 0;// y axis location
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

    void move(double a, double b, double c) {
        cout << "Bird move\n";
        x = a;
        y = b;
        z = c;
    }

    Bird(Bird& a) {
        cout << "Bird copy constructor.\n";
        *this = a;
    }

    ~Bird()
    { cout<<"Virtual Destruct Bird \n"; }

    void sleep() override {
        cout << "Bird sleep\n";
    }

    void eat() override {
        cout << "Bird eat\n";
    }

    friend ostream& operator<< (std::ostream& stream, const Bird& a1) {
        cout << "Bird Overload insertion operator.\n";
    }

};

class Canine : public Animal {

public:
    Canine() {
        cout << "Canine default const\n";
        age = 0;
        id = 0;
        alive = 0;
        x = 0; // x axis location
        y = 0; // y axis location
    }

    Canine(int a, double b, double c) {
        cout << "Canine parameter const\n";
        age = a;
        x = b;
        y = c;
        id = 0;
        alive = 0;

    }

    void move(double a, double b) {
        cout << "Canine move\n";
        x = a;
        y = b;
    }

    Canine(Canine& a) {
        cout << "Canine copy constructor.\n";
        *this = a;
    }

    virtual ~Canine() { cout << "Virtual Destruct Canine \n"; }

    void sleep() override {
        cout << "Canine sleep\n";
    }

    void eat() override {
        cout << "Canine eat\n";
    }

    void hunt() {
        cout << "Canine hunt\n";
    }

    friend ostream &operator<<(std::ostream &stream, const Canine &a1) {
        cout << "Canine Overload insertion operator.\n";
    }
};