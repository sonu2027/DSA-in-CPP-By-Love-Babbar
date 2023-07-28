// unary operator overloading using friend function
#include <iostream>
using namespace std;
class A
{
private:
    int a;
    int b;

public:
    A(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "a=" << a << " and b=" << b << endl;
    }
    friend void operator-(A &obj);
};
void operator-(A &obj)
{
    obj.a = -obj.a;
    obj.b = -obj.b;
}
int main()
{
    A a1(4, 5);
    a1.show();
    -a1;
    a1.show();
    return 0;
}