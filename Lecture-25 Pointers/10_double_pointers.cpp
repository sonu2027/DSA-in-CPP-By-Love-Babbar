#include<iostream>
using namespace std;
int main(){
    int num=9;
    int *ptr=&num;
    int **pptr=&ptr;
    cout<<&num<<endl;
    cout<<&ptr<<endl;
    cout<<&pptr<<endl;
    cout<<*ptr<<endl;
    cout<<*pptr<<endl;
    cout<<**pptr<<endl;
    return 0;
}