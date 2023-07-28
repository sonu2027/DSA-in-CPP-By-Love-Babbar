// Insertion sort
#include <iostream>
using namespace std;
// 20 5 3 8 6
void sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j=i-1;
        for (; j >= 0; j--)
        {
            if (temp < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
}
int main()
{
    int arr[] = {20, 5, 3, 8, 6};
    sort(arr, 5);
    return 0;
}