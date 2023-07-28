#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n:"
         << " ";
    cin >> n;
    int **arr = new int *[n];
    // creation done of array
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    // Taking input and creating 2D array
    cout << "Take the input of " << n << " rows" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // printing output
    cout << "output is printing" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    //Releasing memory
    for (int i = 0; i < n; i++)
    {
        delete [] arr[i];
    }
    delete []arr;
    return 0;
}