#include <iostream>
using namespace std;
class A
{
private:
    int x, y;

public:
    A(int a, int b)
    {
        x = a;
        y = b;
    }
    friend int sum(A obj);
};
int sum(A obj)
{
    int sum;
    sum = obj.x + obj.y;
    return sum;
}
int main()
{
    A a1(4, 2);
    cout << sum(a1);
    return 0;
}