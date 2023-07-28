#include<iostream>
using namespace std;
int n=10;//making global var is a bad practice
void func(){
    cout<<"n after function call "<<n<<endl;
}
int main(){
    cout<<"n before function call "<<n<<endl;
    func();
    return 0;
}