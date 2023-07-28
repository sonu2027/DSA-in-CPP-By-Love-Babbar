#include <iostream>
using namespace std;
#include <string>
int main()
{
    string str1 = "sonu Mondal";
    cout << "str1 is:" << str1 << endl;
    char ch1[100] = "sonu mondal";
    char ch2[100] = {'s', 'o', 'n', 'u', ' ', 'm', 'o', 'n', 'd', 'a', 'l', '\0'};
    cout << "ch1 is:" << ch1 << endl;
    cout << "ch2 is:" << ch2 << endl;
    char ch3[50];
    cin.getline(ch3,50);
    cout<<ch3<<endl;
    string str2;
    cin>>str2;
    cout<<str2;
    string str3=[["sonu"],["mondal"]];
    return 0;
}