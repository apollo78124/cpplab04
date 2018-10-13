#include <iostream>

using namespace std;

class container
{
private:
public:
    container(){ cout << "constructed" << endl;}
    ~container(){ cout << "destroyed" << endl;}
};

int main()
{
    container first;

}