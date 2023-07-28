//Reverse an array
#include<iostream>
using namespace std;
int reverse(int arr[],int size){
    int end=size-1,temp;
    for (int i = 0; i < size/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[end];
        arr[end]=temp;
        end--;
    }
    return 0;
}
int main(){
    int size;
    cout<<"Enter the size of an array "<<endl;
    cin>>size;
    int arr[100];
    cout<<"Enter the element of an array "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    reverse(arr,size);
    cout<<"Reverse of the array is"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}