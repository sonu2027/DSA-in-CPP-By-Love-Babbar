// #include <iostream>
// using namespace std;
// bool search(int *arr, int key, int start, int size)
// {
//     int end = size - 1;
//     int mid = start + (end - start) / 2;
//     if (start > end)
//     {
//         return false;
//     }
//     if (arr[mid] == key)
//     {
//         return true;
//     }
//     else if (arr[mid] > key)
//     {
//         return search(arr, key, 0, mid);
//     }
//     else
//     {
//         return search(arr, key, mid + 1, end + 1);
//     }
// }
// int main()
// {
//     int arr[20], size, key;
//     cout << "Enter the size of array" << endl;
//     cin >> size;
//     cout << "Enter the elements of array" << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Enter the key" << endl;
//     cin >> key;
//     int ans = search(arr, key, 0, size);
//     if (ans == 1)
//     {
//         cout << "Key is present in it" << endl;
//     }
//     else
//     {
//         cout << "key is not present on it" << endl;
//     }
//     return 0;
// }










#include<iostream>
using namespace std;
bool search(int arr[],int size, int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    if(start>end){
        return false;
    }
    if(arr[mid]==key){
        return true;
    }
    else if(key>arr[mid]){
        start=mid+1;
        return search(arr+start,size-start,key);
    }
    else{
        end=mid;
        return search(arr+start,mid,key);
    }
}
int main(){
    int arr[10];
    int n;
    int key;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key to search"<<endl;
    cin>>key;
    if(search(arr,n, key))
    cout<<key<<" is found"<<endl;
    else
    cout<<key<<" is not found"<<endl;
    return 0;
}