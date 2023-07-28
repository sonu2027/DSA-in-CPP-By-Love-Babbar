#include <iostream>
using namespace std;
int fact(int n)
{
    int ans;
    if (n == 0)
    {
        return 1;
    }
    ans = fact(n - 1) * n;
    return ans;
}
int nCr()
{
    int n, r;
    cout << "Enter the value of n and r " << endl;
    cin >> n >> r;
    int ans = fact(n) / (fact(r) * fact(n - r));
    return ans;
}
int main()
{
    cout << nCr();
    return 0;
}