#include<iostream>
using namespace std;
void printarray(int *arr,int size){
    cout<<"areray after printing is: ";
    for (int i = 0; i < size; i++)
    {
        cout<<*arr<<" ";
        arr++;
    }
    
}
int main(){
    int arr[5];
    cout<<"Enter the elements of array "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    printarray(arr,5);
    return 0;
}