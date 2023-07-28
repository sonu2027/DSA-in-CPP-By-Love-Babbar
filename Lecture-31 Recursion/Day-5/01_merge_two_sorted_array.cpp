//Merge two sorted array
#include <iostream>
using namespace std;
void merge(int *arr1, int size1, int *arr2, int size2, int *mrg_arr, int mrg_size)
{
    for (int i = 0; i < size1; i++)
    {
        mrg_arr[i] = arr1[i];
    }
    for (int i = size1; i < mrg_size; i++)
    {
        mrg_arr[i] = arr2[i - size1];
    }
    // checking merge array
    for (int i = 0; i < mrg_size; i++)
    {
        cout << mrg_arr[i] << " ";
    }
    cout << endl;
    // sorting merge array
    for (int i = 0; i < mrg_size-1; i++)
    {
        for (int j = i + 1; j < mrg_size; j++)
        {
            if (mrg_arr[i] > mrg_arr[j])
            {
                swap(mrg_arr[i], mrg_arr[j]);
            }
        }
    }
    // printing merge array
    for (int i = 0; i < mrg_size; i++)
    {
        cout << mrg_arr[i] << " ";
    }
}
int main()
{
    int arr1[5] = {2, 5, 10, 16, 19};
    int arr2[6] = {3, 8, 12, 18, 20, 84};
    int mrg_arr[11];
    merge(arr1, 5, arr2, 6, mrg_arr, 11);
    return 0;
}