//Code studio problem
//problem statement:Find unique no in an array
#include <iostream>
using namespace std;
int findUnique(int *arr, int size)
{
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans=ans^arr[i];
        //arr++;
    }
    return ans;
}
int main()
{
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the elements of array " << endl;
    for (int k = 0; k < size; k++)
    {
        cin >> arr[k];
    }
    cout << endl;
    cout<<"The unique no in an array is "<<findUnique(arr, size);
    return 0;
}