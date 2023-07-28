#include <iostream>
using namespace std;
void sort(int *ptr, int size)
{
    if (size == 1)
        return;
    for (int i = 0; i < size - 1; i++)
    {
        if (ptr[i] > ptr[i+1])
            swap(ptr[i], ptr[i+1]);
    }
    sort(ptr, size - 1);
}
int main()
{
    int arr[100];
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr, size);
    cout << "Elements after sorting" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}