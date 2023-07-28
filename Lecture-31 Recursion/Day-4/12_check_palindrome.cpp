#include <iostream>
#include <string.h>
using namespace std;
bool check_palindrome(string &ref, int i, int j)
{
    if (i > j)
        return true;
    else if (ref[i] != ref[j])
        return false;
    return check_palindrome(ref, i+1, j-1);
}
int main()
{
    string ch;
    cout<<"Enter your string"<<endl;
    cin>>ch;
    int j = ch.length()-1;
    int isPalindrome=check_palindrome(ch, 0, j);
    if (isPalindrome)
        cout<<"String is palindrome"<<endl;
    else
        cout<<"String is not palindrome"<<endl;
    return 0;
}