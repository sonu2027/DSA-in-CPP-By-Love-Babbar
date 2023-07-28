#include <iostream>
using namespace std;
int get_fact(int n)
{
    // Base case
    if (n == 0)
    {
        return 1;
    }
    return n * get_fact(n - 1);
}
int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    cout << get_fact(n);
    return 0;
}