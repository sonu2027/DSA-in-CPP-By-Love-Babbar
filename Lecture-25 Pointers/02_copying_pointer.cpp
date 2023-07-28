#include<iostream>
using namespace std;
int main(){
    int num=10;
    int *p=&num;
    int *q=p;
    cout<<"value of p "<<p<<endl;
    cout<<"value of q "<<q<<endl<<endl;

    cout<<"value of num "<<*p<<endl;
    cout<<"value of num "<<*q<<endl<<endl;
    return 0;
}