#include <iostream>
#include <vector>
using namespace std;
void merge(int arr1[], int n1, int arr2[], int n2, int arr[])
{

    int i = 0, j = 0;
    int y = 0,z=0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[y++] = arr1[i++];
            z++;
        }
        else
        {
            arr[y++] = arr2[j++];
            z++;
        }
    }

    while (i<(n1+n2))
    {
        arr[z++]=arr1[i++];
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
    int arr1[5]={1,4,5,7,9};
    int arr2[3]={2,6,8};
    int arr[8] = {0};
    merge(arr1, 5, arr2, 3, arr);
    print(arr, 8);
    return 0;
}