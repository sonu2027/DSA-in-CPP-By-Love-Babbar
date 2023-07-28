// Print elements of array arr[6]={1,2,3,4,5,6} using recursion
#include<iostream>
using namespace std;
void prints(int arr1[], int length){
    if(length==0){
        cout<<endl;
        return;
    }
    cout<<arr1[0]<<" ";
    prints(arr1+1, length-1);
    cout<<arr1[0]<<" ";
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    prints(arr, 6);
    return 0;
}