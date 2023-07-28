#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    if (isPrime(n))
    {
        cout << n << " is a prime no" << endl;
    }
    else
    {
        cout << n << " is not a prime no" << endl;
    }
    return 0;
}