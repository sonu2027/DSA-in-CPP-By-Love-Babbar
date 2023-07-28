#include <iostream>
using namespace std;
class hero
{
    int a;

public:
    hero()
    {
        a = 10;
        cout << "Constructor is called" << endl;
        cout << "Value of a is " << a << endl;
    }
    ~hero(){
        cout<<"Destructor is executed"<<endl;
    }
};
int main()
{
    // object created statically
    hero h1,h3;
    // object created dynamically
    hero *h2 = new hero;
    return 0;
}