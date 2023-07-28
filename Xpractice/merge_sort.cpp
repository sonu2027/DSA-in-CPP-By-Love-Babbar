#include<iostream>
using namespace std;
void merge(int *arr, int start, int end){
    int mid=start+(end-start)/2;
    int size1=mid-start+1;
    int size2=end-mid;
    int *arr1=new int[size1];
    int *arr2=new int[size2];
    //copying values
    int i=start;
    int j=0;
    while (j<size1)
    {
        arr1[j++]=arr[i++];
    }
    i=mid+1;
    j=0;
    while (j < size2)
    {
        arr2[j++]=arr[i++];
    }
    //sorting
    int index1=0;
    int index2=0;
    i=start;
    while (index1<size1 && index2<size2)
    {
        if (arr1[index1]>arr2[index2])
        {
            arr[i++]=arr2[index2++];
        }
        else{
            arr[i++]=arr1[index1++];
        }
    }
    while (index1<size1)
    {
        arr[i++]=arr1[index1++];
    }
     while (index2<size2)
    {
        arr[i++]=arr2[index2++];
    }
    cout<<"arr"<<endl;
    delete[] arr1;
    delete[] arr2;
}
void break_arr(int *arr, int start, int end){
    if(start>=end){
        return;
    }
    int mid=start+(end-start)/2;
    // Right side break
    break_arr(arr, start, mid);
    // left side break
    break_arr(arr, mid+1, end);
    //merge sorted array
    merge(arr,start,end);
}
int main(){
    int arr[20]={2,1,6,4,9,0,34,23,26,40};
    break_arr(arr,0,9);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}