#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter row "
         << " ";
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < row - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << i+1;
        }
        cout << endl;
    }

    return 0;
}