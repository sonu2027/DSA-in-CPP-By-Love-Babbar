#include <iostream>
using namespace std;
class A
{
private:
    int a, b;

public:
    void input()
    {
        cout << "Enter value" << endl;
        cin >> a >> b;
    }
    friend void add(A obj);
};
void add(A obj)
{
    int c;
    c = obj.a + obj.b;
    cout << "sum=" << c;
}
int main()
{
    A a1;
    a1.input();
    add(a1);
    return 0;
}