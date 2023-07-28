//search the elements 1 present in an array or not
#include<iostream>
using namespace std;
bool search(int arr[],int size,int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return true;
            break;
        }
    }
    return 0;
}
int main(){
    int size,element;
    cout<<"Enter the size of an array "<<endl;
    cin>>size;
    cout<<"Enter the element you want to search in an array"<<endl;
    cin>>element;
    int arr[100];
    cout<<"Enter the element of an array "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    bool ans=search(arr,size,element);
    if (ans){
        cout<<"Element "<<element<<" is present in array"<<endl;
    }
    else{
        cout<<"Element "<<element<<" is not present in array"<<endl;
    
    }
    return 0;
}