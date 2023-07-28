#include<iostream>
using namespace std;
int main(){
    int a=2;
    int b=9;
    cout<<"a & b is "<<(a&b)<<endl;
    cout<<"a | b is "<<(a | b)<<endl;
    cout<<"~a is "<<(~a)<<endl;
    cout<<"a ^ b is "<<(a ^ b)<<endl;
    cout<<"b<<3 "<<( b<<3)<<endl;
    cout<<"a>>2 "<<( a>>2)<<endl;
    /*
    7= 111
    9=1001
    _______
      1110

    */
    return 0;
}