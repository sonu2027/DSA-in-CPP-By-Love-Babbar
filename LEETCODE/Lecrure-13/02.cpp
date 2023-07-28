#include <iostream>
using namespace std;
int peak(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if ((arr[mid] > arr[mid - 1]) && (arr[mid] > arr[mid + 1]))
        {
            return arr[mid];
        }
        else if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else if (arr[mid] < arr[mid - 1])
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[8] = {1, 3, 4, 6, 8, 7, 3, 1};
    int largest = peak(arr, 8);
    cout << largest;
    return 0;
}