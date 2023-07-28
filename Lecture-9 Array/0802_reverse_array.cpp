// Reverse an array
#include <iostream>
using namespace std;
void reverse(int arr[],int size)
{
    cout << "Reversing the array " << endl;
    int start = 0, end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[], int size)
{
    cout << "Printing the reverse of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size;
    cout << "Enter the size of an array " << endl;
    cin >> size;
    int arr[100];
    cout << "Enter the element of an array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    reverse(arr,size);
    printarray(arr, size);
    return 0;
}