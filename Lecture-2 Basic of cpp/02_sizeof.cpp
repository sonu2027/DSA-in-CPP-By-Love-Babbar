#include <iostream>
using namespace std;
int main()
{
    int n;
    char ch;
    float f;
    double d;
    bool b;
    cout << "size of integer is: " << sizeof(int) << endl;
    cout << "size of character is: " << sizeof(char) << endl;
    cout << "size of float is: " << sizeof(float) << endl;
    cout << "size of double is: " << sizeof(double) << endl;
    cout << "size of Boolean is: " << sizeof(bool) << endl
         << endl;

    // We can also use variable name of getting size of data type
    cout << "size of integer is: " << sizeof(n) << endl;
    cout << "size of character is: " << sizeof(ch) << endl;
    cout << "size of float is: " << sizeof(f) << endl;
    cout << "size of double is: " << sizeof(d) << endl;
    cout << "size of Boolean is: " << sizeof(b) << endl;
    return 0;
}