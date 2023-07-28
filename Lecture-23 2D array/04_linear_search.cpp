// linear search in 2D array
#include <iostream>
using namespace std;
bool ifPresent(int arr[][4], int key, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[3][4];
    cout << "Enter the element of 3*4 2D array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    int key;
    cout << "Enter the key to search" << endl;
    cin >> key;
    if (ifPresent(arr, key, 3, 4))
    {
        cout << key << " is found" << endl;
    }
    else
    {
        cout << key << " is not found" << endl;
    }
    return 0;
}