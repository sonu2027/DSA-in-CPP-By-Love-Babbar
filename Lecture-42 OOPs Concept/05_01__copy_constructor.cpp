#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    A(int x, int y)
    {
        cout<<"parameterized constructor is calling...."<<endl;
        a = x;
        b = y;
    }
    A(A &ref)
    {
        cout<<"Copy constructor is called"<<endl;
        a = ref.a;
        b = ref.b;
    }
    void show()
    {
        cout << a << " " << b << endl;
    }
};
int main()
{
    A obj(10, 20);
    obj.show();
    A obj2 = obj;
    obj2.show();
    return 0;
}