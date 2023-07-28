#include <iostream>
using namespace std;
int get_pivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int m = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[m] >= arr[0])
        {
            s = m + 1;
        }
        else
        {
            e = m;
        }
        m = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int arr[5]={4, 7, 8, 2, 3};
    int ans = get_pivot(arr, 5);
    cout << "Index of pivot element is " << ans << endl;
    return 0;
}