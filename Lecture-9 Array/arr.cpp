#include <iostream>
using namespace std;
void fun(int n[])
{
    for (int i = 0; i < 2; i++)
    {
        n[i] = n[i] + 3;
    }
}
int main()
{
    int n[2] = {3, 2};
    fun(n);
    for (int i = 0; i < 2; i++)
    {
        cout << n[i] << " ";
    }
    cout<<endl;

    //Another problem
    int ar[10];
    for (int i = 0; i < 10; i++)
    {
        cout << ar[i] << " ";
    }
    cout<<endl;

    //Another problem
    int arr[10]={2};
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}