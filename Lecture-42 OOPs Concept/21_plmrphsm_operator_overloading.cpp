// unary operator overloading outside a class
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
    void operator-();
};
void A :: operator-()
{
    a = -a;
    b = -b;
}
int main()
{
    A a1(4, 5);
    a1.show();
    -a1;
    a1.show();
    return 0;
}