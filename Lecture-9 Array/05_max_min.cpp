#include<iostream>
using namespace std;
int getmax(int num[],int n){
    int getmax=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i]>getmax)
        {
            getmax=num[i];
        }
    }
    
    return getmax;
}
int getmin(int num[],int n){
    int getmin=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i]<getmin)
        {
            getmin=num[i];
        }
    }
    return getmin;
}
int main(){
    int arr[100];
    int size;
    cout<<"Enter size of an array "<<endl;
    cin>>size;
    cout<<"Enter the elements of array "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Largest value of a array is "<<getmax(arr,size)<<endl;
    cout<<"Smallest value of a array is "<<getmin(arr,size)<<endl;
    return 0;
}