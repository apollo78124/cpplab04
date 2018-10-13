//
// Created by dldms on 10/12/2018.
//

#ifndef LAB4_HEADER_HPP
#define LAB4_HEADER_HPP

#endif //LAB4_HEADER_HPP
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
    Animal ();
    Animal (int a, double b, double c);

    virtual void move(double a, double b);

    Animal(Animal& a);

    virtual ~Animal();
    virtual void sleep();

    virtual void eat();

    friend ostream& operator<< (std::ostream& stream, const Animal& a1);
};

class Bird : public Animal
{
private:

    double z;
public:
    Bird ();

    Bird (int a, double b, double c, double d);

    void move (double a, double b, double c);
    Bird(Bird& a);
    ~Bird();
    void sleep() override;

    void eat() override;
    friend ostream& operator<< (std::ostream& stream, const Bird& a1);

};

class Canine : public Animal {

public:
    Canine();
    Canine(int a, double b, double c);

    void move(double a, double b) override;

    Canine(Canine& a);

    virtual ~Canine();
    void sleep() override;
    void eat() override;

    void hunt();

    friend ostream &operator<<(std::ostream &stream, const Canine &a1);
};