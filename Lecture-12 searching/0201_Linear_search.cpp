//search the elements 1 is present in an array or not
#include<iostream>
using namespace std;
void search(int arr[],int size){
    int i;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==1){
            cout<<arr[i]<<" is present in an array";
            break;
        }
    }
}
int main(){
    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;
    int arr[100];
    cout<<"Enter the element of of array: ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    search(arr,size);

    return 0;
}