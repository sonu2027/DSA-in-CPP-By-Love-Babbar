#include <iostream>
using namespace std;
int search(int *arr, int key, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    if (end == 0)
    {
        return mid;
    }
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] > key)
    {
        return search(arr, key, mid + 1);
    }
    else
    {
        return search(arr + mid + 1, key, end - mid );
    }
}
int main()
{
    int arr[20], size, key;
    cout << "Enter the size of array" << endl;
    cin >> size;
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key" << endl;
    cin >> key;
    int ans = search(arr, key, size);
    cout<<"Index of "<<key<<" is:"<<ans;
    return 0;
}