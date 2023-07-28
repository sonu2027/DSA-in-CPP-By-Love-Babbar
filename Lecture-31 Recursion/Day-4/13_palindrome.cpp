#include <iostream>
#include <string.h>
using namespace std;
void reverse(string &ref, int i, int j)
{
    if (i > j)
        return;
    swap(ref[i], ref[j]);
    reverse(ref, i + 1, j - 1);
}
bool check_palindrome(string &ref, int i, int j)
{
    if (ref[i] != ref[j])
        return false;
    if (i > j)
        return true;
    return check_palindrome(ref, i + 1, j - 1);
}
int main()
{
    string ch;
    cout << "Enter your string" << endl;
    cin >> ch;
    cout << "string is " << ch << endl;
    int j = ch.length() - 1;
    reverse(ch, 0, j);
    cout << "String after reverse " << ch << endl;
    int isPalindrome = check_palindrome(ch, 0, j);
    if (isPalindrome)
        cout << "String is palindrome" << endl;
    else
        cout << "String is not palindrome" << endl;
    return 0;
}