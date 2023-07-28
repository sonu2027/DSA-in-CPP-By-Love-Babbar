// #include <iostream>
// using namespace std;
// bool isSort(int arr[], int size, int count)
// {
//     if (size == 0 || size == 1)
//     {
//         return true;
//     }
//     if (arr[0] > arr[1])
//     {
//         cout<<"The function call is "<<count<<" times"<<endl;
//         return false;
//     }
//     else
//     {
//         count++;
//         bool ans = isSort(arr + 1, size - 1, count);
//         return ans;
//     }
// }
// int main()
// {
//     int arr[10] = {0, 1, 2, 3, 4, 7, 6, 7, 8, 9};
//     int ans = isSort(arr, 10, 0);

//     if (ans)
//         cout << "Array is sorted" << endl;
//     else
//         cout << "Array is not sorted" << endl;
        
//     return 0;
// }



















#include<iostream>
using namespace std;
bool isSort(int arr[], int n){
    if(n==0 || n==1){
        return true;
    }
    if (arr[0]>arr[1])
    {
        return false;
    }
    return isSort(arr+1, n-1);
    
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
    if(isSort(arr, n))
    cout<<"Aray is sorted"<<endl;
    else
    cout<<"Array is not sorted"<<endl;
    return 0;
}