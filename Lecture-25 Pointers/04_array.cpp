#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,0,4,3,7};
    cout<<"Address of first element of arr is: "<<arr<<endl;
    cout<<"Address of first element of arr is: "<<&arr<<endl;
    cout<<"Address of first element of arr is: "<<&arr[0]<<endl;
    cout<<"value of 1st element "<<*arr<<endl; 
    cout<<"value of 1st element "<<*arr+1<<endl; 
    cout<<"value of 3rd element "<<*(arr+2)<<endl;
    cout<<"value of 3rd element "<<arr[2]<<endl; 
    cout<<"value of 4th element "<<3[arr]<<endl;  
    return 0;
}