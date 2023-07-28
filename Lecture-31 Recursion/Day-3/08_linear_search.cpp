// #include<iostream>
// using namespace std;
// bool search(int *arr, int key, int size){
// if (size==0)
// {
//     return false;
// }
// if (key==arr[0])
// {
//     return true;
// }
// return search(arr+1,key,size-1);
// }
// int main(){
//     int arr[5]={4,7,6,9,1};
//     int ans=search(arr,0,5);
//     if (ans)
//     {
//         cout<<"Key is present in an array"<<endl;
//     }
//     else{
//         cout<<"Key is not present in an array"<<endl;

//     }
//     return 0;
// }













#include<iostream>
using namespace std;
bool search(int arr[], int n, int key){
    if (n==0)
        return false;
    if (arr[0]==key)
    {
        return true;
    }
    
    return search(arr+1, n-1, key);
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
    if(search(arr, n, key))
    cout<<key<<" is found"<<endl;
    else
    cout<<key<<" is not found"<<endl;
    return 0;
}