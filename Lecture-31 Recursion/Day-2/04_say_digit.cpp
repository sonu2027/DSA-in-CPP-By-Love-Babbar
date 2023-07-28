#include <iostream>
using namespace std;
int main()
{
    string arr[10] = {"Zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n, rev = 0, remainder, ans;
    cout << "Enter n" << endl;
    cin >> n;
    while (n > 0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n / 10;
    }
    cout << "Reverse of n is: " << rev << endl;
    cout << "String in the form of number is: ";
    while (rev > 0)
    {
        ans = rev % 10;
        cout << arr[ans] << " ";
        rev = rev / 10;
    }
    return 0;
}