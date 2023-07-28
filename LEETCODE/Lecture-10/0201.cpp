//Code studio problem
//problem statement:Find unique no in an array
#include <iostream>
using namespace std;
int findUnique(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++) 
        {
            if ( *arr==*(arr + j - i))
            {
                count++;
            }
        }
        arr++;
        if (count == 1)
        {
            break;
        }
    }
    return *(arr-1);
}
int main()
{
    int arr[] = {3, 1, 2, 2, 1};
    int size = 5;
    cout<<findUnique(arr, size);
    return 0;
}