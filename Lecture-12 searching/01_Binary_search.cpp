#include <iostream>
using namespace std;
int evenIndex(int arr[],int size, int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            return mid;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
// int oddIndex(int arr[],int size, int key){
//     int start=0;
//     int end=size-1;
//     int mid=start+(end-start)/2;
//     while(start<=end){
//         if(arr[mid]<key){
//             start=mid+1;
//         }
//         else if(arr[mid]>key){
//             end=mid-1;
//         }
//         else{
//             return mid;
//         }
//         mid=start+(end-start)/2;
//     }
//     return -1;
// }
int main()
{
    int even[10]={12,19,22,28,29,31,42,48,54,60};
    int odd[9]={3,7,9,10,12,19,23,26,32};
    cout<<"Index of element 42 is "<<evenIndex(even,10,42)<<endl;
    cout<<"Index of element 26 is "<<evenIndex(odd,9,26)<<endl;
    return 0;
}