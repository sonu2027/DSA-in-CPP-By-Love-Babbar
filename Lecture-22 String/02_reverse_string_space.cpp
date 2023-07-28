#include <iostream>
using namespace std;
void printing(char ch[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << ch[i];
    }
    cout << " ";
}
void reverse_string_space(char ch[])
{
    char rev[10];
    int ch_index = 0;
    int end;
    while (ch[ch_index - 1] != '\0')
    {
        int s_len = 0;
        int rev_index = 0;
        int start = 0;
        while (ch[ch_index] != ' ' && ch[ch_index] != '\0')
        {
            rev[rev_index] = ch[ch_index];
            s_len++;
            rev_index++;
            ch_index++;
        }
        end = rev_index - 1;
        while (start < rev_index / 2)
        {
            swap(rev[start], rev[end]);
            start++;
            end--;
        }
        printing(rev, s_len);
        ch_index++;
    }
}
int main()
{
    char ch[15] = {'m', 'y', ' ', 'n', 'a', 'm', 'e', ' ', 'i', 's', ' ', 's', 'o', 'n', '\0'};
    reverse_string_space(ch);
    return 0;
}