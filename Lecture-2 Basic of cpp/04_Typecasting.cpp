#include<iostream>
using namespace std;
int main(){
    char ch=-128;
    // 64 type casted in the form of character
    cout<<ch<<endl;
    ch='@';
    // @ type casted in the form of integer
    cout<<int(ch)<<endl;
    ch=123456;
    cout<<ch<<endl;
    ch=98;
    cout<<ch<<endl;
    return 0;
}