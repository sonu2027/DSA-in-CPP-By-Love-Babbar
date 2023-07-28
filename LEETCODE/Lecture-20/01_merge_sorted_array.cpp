#include <iostream>
using namespace std;
void merge(int arr1[], int n1, int arr2[], int n2, int arr[], int n)
{
    int i = 0, j = 0, k = 0;
    int y = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[y++] = arr1[i++];
        }
        else
        {
            arr[y++] = arr2[j++];
        }
    }

    while (i < n1)
    {
        arr[y++] = arr1[i++];
    }
    while (j < n2)
    {
        arr2[y++] = arr2[j++];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[5]{2, 4, 6};
    int arr[8];
    merge(arr1, 5, arr2, 3, arr, 8);
    return 0;
}