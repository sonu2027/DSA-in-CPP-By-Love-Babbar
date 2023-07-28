#include<iostream>
using namespace std;
void print(int arr[], int n, int start=0){
    for (int i = start; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={2,8,5,3,0,9};
    print(arr,6);
    print(arr,6,3);
    return 0;
}