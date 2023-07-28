#include <iostream>
using namespace std;
class sample_1
{
    friend class sample_2; // declaring friend class
    int a, b;

public:
    void getdata_1()
    {
        cout << "Enter A & B values in class sample_1: ";
        cin >> a >> b;
    }
    void display_1()
    {
        cout << "A=" << a << endl;
        cout << "B=" << b << endl;
    }
};
class sample_2
{
    int c, d, sum;
    sample_1 obj1;

public:
    void getdata_2()
    {
        obj1.getdata_1();
        cout << "Enter C & D values in class sample_2: ";
        cin >> c >> d;
    }
    void sum_2()
    {
        sum = obj1.a + obj1.b + c + d;
    }
    void display_2()
    {
        cout << "A=" << obj1.a << endl;
        cout << "B=" << obj1.b << endl;
        cout << "C=" << c << endl;
        cout << "D=" << d << endl;
        cout << "SUM=" << sum << endl;
    }
};
int main()
{
    sample_1 s1;
    s1.getdata_1();
    s1.display_1();
    sample_2 s2;
    s2.getdata_2();
    s2.sum_2();
    s2.display_2();
}
