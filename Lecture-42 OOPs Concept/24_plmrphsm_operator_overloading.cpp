//Binary operator overloading outside the class 
#include <iostream>
using namespace std;
class A
{
public:
    int a;

public:
    void operator+(A &obj);
};
void A::operator+(A &obj)
{
    int val1 = this->a;
    int val2 = obj.a;
    cout << val2 - val1;
}
int main()
{
    A a1, a2;
    a1.a = 4;
    a2.a = 7;
    a1 + a2;
    return 0;
}