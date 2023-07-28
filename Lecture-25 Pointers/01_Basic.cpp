#include<iostream>
using namespace std;
int main(){
    int num=10;
    int *ptr=&num;
    cout<<"Value of num is "<<num<<endl;
    cout<<"Value of num is "<<*ptr<<endl;
    cout<<"Address of ptr is "<<ptr<<endl<<endl;

    (*ptr)++;
    cout<<"After increasing value at address"<<endl;
    cout<<"Value of num is "<<num<<endl;
    cout<<"Value of num is "<<*ptr<<endl;
    cout<<"Address of ptr is "<<ptr<<endl<<endl;

    //size
    cout<<"Size of ptr is "<<sizeof(num)<<endl;
    cout<<"Size of ptr is "<<sizeof(ptr)<<endl;

    int i=6;
    int *p=0;
    p=&i;
    int *q=0;
    q=&i;
    cout<<*p<<" "<<*q<<endl;
    return 0;
}