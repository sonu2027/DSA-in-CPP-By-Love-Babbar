#include <iostream>
#include<string>
using namespace std;
int get_string_length(char ch[])
{
    int length = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}
void print_string(char ch[])
{
    cout << "String is "
         << " ";
    for (int i = 0; ch[i] != '\0'; i++)
    {
        cout << ch[i];
    }
    cout << endl;
}
void reverse_string(char ch[], int length)
{
    int j = length - 1;
    for (int i = 0; i < length / 2; i++)
    {
        swap(ch[i], ch[j]);
        j--;
    }
}
bool palindrome(char ch[], int length)
{
    int end = length - 1;
    int count = 0;
    for (int i = 0; i < length / 2; i++)
    {
        if (ch[i] != ch[end])
        {
            return 0;
        }
        else
        {
            end--;
        }
    }
    return 1;
}

int main()
{
    char ch[10];
    cout << "Enter the string" << endl;
    cin >> ch;
    // ch[6] = '\0';
    cout << ch << endl;
    print_string(ch);
    int length = get_string_length(ch);
    cout << "Length of the string is " << length << endl;
    reverse_string(ch, length);
    print_string(ch);
    cout << palindrome(ch, length) << endl;
    return 0;
}