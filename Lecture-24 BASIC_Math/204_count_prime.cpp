#include <iostream>
using namespace std;
int countPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    int prime = 0;
    int count;
    for (int i = 2; i < n; i++)
    {
        count = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
                continue;
            }
        }
        if (count == 0)
        {
            prime++;
        }
    }
    return prime;
}
int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    cout << countPrime(n) << endl;
    return 0;
}