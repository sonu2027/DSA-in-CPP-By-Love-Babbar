#include<iostream>
using namespace std;
int sum(int *arr, int n){ // we can also write arr[] at the place of *arr
int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+i[arr];
    }
    return sum;
}
int main(){
    int arr[10]={2,5,6,3,8,9};
    cout<<"sum of elements of an array: "<<sum(arr,6)<<endl;
    cout<<"sum of elements of an array: "<<sum(arr+3,6)<<endl;
    return 0;
}