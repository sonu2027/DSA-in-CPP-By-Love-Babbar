#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7};
    int *ptr=&arr[0];
    cout<<*ptr<<endl;
    cout<<*arr<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<*(arr+1)<<endl;
    return 0;
}