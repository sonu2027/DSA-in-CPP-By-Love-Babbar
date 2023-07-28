//Runtime polymorphism achieved by method overriding
#include <iostream>
using namespace std;
class parent
{
public:
    int a;

public:
    virtual void func()
    {
        cout << "Inside parent class" << endl;
    }
};
class child : public parent
{
public:
    void func()
    {
        cout << "Inside child class" << endl;
    }
};
int main()
{
    parent *p1;
    child c1;
    p1=&c1;
    p1->func();
    return 0;
}