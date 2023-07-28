#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char ch;
    cout << "Enter a " << endl;
    cin >> a;
    cout << "Enter operation " << endl;
    cin >> ch;
    cout << "Enter b " << endl;
    cin >> b;
    switch (ch)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    case '%':
        cout << a % b;
        break;
    }
    return 0;
}