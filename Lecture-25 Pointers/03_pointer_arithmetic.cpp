#include<iostream>
using namespace std;
int main(){
    int num=9;
    int *ptr=&num;
    (*ptr)++;
    cout<<"Value of num is "<<num<<endl;
    cout<<"Value of address is "<<ptr<<endl;
    ptr++;
    cout<<"Value of num is "<<num<<endl;
    cout<<"Value of address is "<<ptr<<endl;
    return 0;
}