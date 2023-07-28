//Runtime polymorphism achieved by method overriding
#include <iostream>
using namespace std;
class parent
{
public:
    int a;

public:
    void func()
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
    child c1;
    c1.func();
    return 0;
}