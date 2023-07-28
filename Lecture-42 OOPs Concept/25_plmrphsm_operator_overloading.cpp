// Binary operator overloading using friend function
#include <iostream>
using namespace std;
class A
{
public:
    int a;

public:
    friend void operator+(A);
};
void operator+(A &obja, A &objb)
{
    int val1 = obja.a;
    int val2 = objb.a;
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