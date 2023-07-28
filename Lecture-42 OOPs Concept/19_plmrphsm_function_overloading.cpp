#include <iostream>
using namespace std;
class A
{
public:
    void say_hello()
    {
        cout << "hello sonu" << endl;
    }
    void say_hello(int n)
    {
        cout << "hello sonu " << n << endl;
    }
    int say_hello(string name, int n)
    {
        cout << "hello sonu " << name << endl;
        return n;
    }
};
int main()
{
    A a1;
    a1.say_hello();
    a1.say_hello(7);
    a1.say_hello("sonu", 9);
    return 0;
}