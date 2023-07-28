#include<iostream>
#include <bits/stdc++.h>
using namespace std;
// void sort(int arr[], int size){
//     int n;
//     for (int i = 1; i < size; i++)
//     {
//         n=arr[i];
//         int j = i-1;
//         for (; j >= 0; j--)
//         {
//             if(n<arr[j]){
//                 arr[j+1]=arr[j];
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j+1]=n;
//     }
// }
int main(){
    int arr[10]={1,5,6,2};
    sort(arr[0], arr[3]);
    //sort(arr, 4);
    for(int i=0; i<4; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}