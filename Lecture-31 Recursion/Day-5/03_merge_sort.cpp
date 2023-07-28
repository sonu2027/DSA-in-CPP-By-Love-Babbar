// Merge sort using recursion (bubble sort)
#include <iostream>
using namespace std;
 void merge(int *arr, int s, int e){
     for (int i = 0; i < e; i++)
     {
         for (int j = i+1; j < e+1; j++)
         {
             if (arr[i]>arr[j])
                swap(arr[i],arr[j]);
         }
     }
 }
void break_arr(int *arr, int start, int end)
{
    int mid = start + (end - start) / 2;
    if (start >= end)
    {
        return;
    }
    break_arr(arr, start, mid);
    break_arr(arr, mid + 1, end);
    merge(arr,start,end);

}
int main()
{
    int arr[15] = {3, 7, 0, 1, 5, 8, 3, 2, 34, 66, 87, 23, 12, 12, 12};
    int n = 15;
    break_arr(arr, 0, n-1);
    for (int i = 0; i < 15; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}