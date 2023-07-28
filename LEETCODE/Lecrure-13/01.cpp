#include <iostream>
using namespace std;
int firstOcc(int arr[],int size, int key){
    int start=0;
    int end=size-1;
    int ans=0;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;

        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int lastOcc(int arr[],int size, int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;

        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{
    int even[10]={12,19,22,29,29,29,42,48,54,60};
    cout<<"Inde of firstOcc of element 29 is "<<firstOcc(even,10,29)<<endl;
    cout<<"Index of lastOcc of element 29 is "<<lastOcc(even,10,29)<<endl;
    return 0;
}