#include<iostream>
using namespace std;
int main(){

    int a=2147483647;// pow(2,31)-1
    cout<<"maximum value of integer a is:"<<a<<endl;
    a=-2147483648;// -pow(2, 31)
    cout<<"minimum value of integer a is: "<<a<<endl;
    char ch=255; //pow(2,8)-1
    cout<<"maximum value of character ch is:"<<ch<<endl;
    ch=-128;// -pow(2, 7)
    cout<<"minimum value of character ch is: "<<ch<<endl;
    return 0;
}