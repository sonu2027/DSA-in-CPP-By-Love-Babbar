#include<iostream>
#include<array>
using namespace std;
void printSum(int arr[][4], int row , int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of " << i << "th row of element is: " << sum << endl;
    }
}
int main()
{
    int arr[3][4] = {{5, 20, 7, 2}, {1, 39, 9, 6}, {6, 22, 0, 8}};
    printSum(arr, 3, 4);
    return 0;
}