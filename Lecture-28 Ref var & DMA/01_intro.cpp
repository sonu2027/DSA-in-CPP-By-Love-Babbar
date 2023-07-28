#include<iostream>
using namespace std;
int main(){
    int i=6;
    int &j=i;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    i++;
    cout<<j<<endl;
    return 0;
}