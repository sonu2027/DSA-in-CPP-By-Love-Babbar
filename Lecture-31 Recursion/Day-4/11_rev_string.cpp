#include <iostream>
using namespace std; 
void reverse(string &ref, int i, int j){
    if(i>j)
        return;
    swap(ref[i], ref[j]);
    reverse(ref, i+1, j-1);
}
string reverseString(string str)
{
    int i=0;
    int j=str.length()-1;
    reverse(str, i, j);
    return str;
}