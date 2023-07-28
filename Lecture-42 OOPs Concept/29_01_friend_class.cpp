#include <iostream>
using namespace std;
class A
{
    friend class B;
    int a;

public:
    void input()
    {
        cout << "Enter a:" << endl;
        cin >> a;
    }
};
class B
{
    int b, sum;
    A a1;

public:
    void input()
    {
        a1.input();
        cout << "Enter b: " << endl;
        cin >> b;
    }
    int add()
    {
        sum = a1.a + b;
        return sum;
    }
};
int main()
{
    B b1;
    b1.input();
    cout<<b1.add()<<endl;;
}