#include <iostream>
using namespace std;

void merge_zeros(int arr[], int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0){
        swap(arr[i],arr[count]);
        count++;
    }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[7] = {0, 3, 4, 0, 0, 8, 0};
    merge_zeros(arr, 7);
    print(arr, 7);
    return 0;
}