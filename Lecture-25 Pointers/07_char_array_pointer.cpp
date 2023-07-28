#include <iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,9};
    char chr[10]={'a', 'r', 'f', 'n'};
    string str="sonu Mondal";

    cout<<arr<<endl; // It will print the address of 1st element of integer array
    cout<<arr[2]<<endl;  // It will print the 3rd element of integer array

    cout<<chr<<endl; // but it will not pint the address of 1st element of character array
    cout<<chr[1]<<endl; // It will work same as integer array

    cout<<str<<endl; // It will also print the whole string not the address of 1st element of string
    cout<<str[2]; // It will works same as inetger array
    return 0;
}