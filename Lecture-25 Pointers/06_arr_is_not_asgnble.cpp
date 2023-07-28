#include<iostream>
using namespace std;
int main(){
    int arr[3]={1,2,4};
    //ERROR
    //arr=arr+1;//It will show ERROR brcause arr is not assignable
    int *ptr=arr;
    ptr=ptr+1;
    cout<<*ptr;
    return 0;
}