//print the sum of all elements present in an array
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of an array "<<endl;
    cin>>size;
    int arr[100];
    int sum=0;
    cout<<"Initialize the array"<<endl;
    for (int i = 0; i < size; i++)
    {
       cin>>arr[i]; 
       sum=sum+arr[i];
    }
    cout<<"Sum of the elements of an array will be "<<sum;
    
    return 0;
}