// #include <iostream>
// using namespace std;
// int sum(int arr[], int size)
// {
//     if(size==0){
//         return 0;
//     }
//     if (size == 1)
//     {
//         return arr[0];
//     }
//     arr[1] = arr[0] + arr[1];
//     return sum(arr + 1, size - 1);
// }
// int main()
// {
//     int arr[5] = {3, 2, 9, 6, 7};
//     int ans = sum(arr, 5);
//     cout << "Sum of all elements in an array is:" << ans;
//     return 0;
// }













#include<iostream>
using namespace std;
int sum(int arr[], int n){
    if(n==1){
        return arr[0];
    }
    if(n==0){
        return 0;
    }
    int x=arr[0];
    return x+sum(arr+1, n-1);
}
int main(){
    int arr[10];
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"sum is:"<<sum(arr, n);
    return 0;
}