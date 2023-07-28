#include <iostream>
using namespace std;
int get_power(int base, int power)
{
    if (power == 1)
        return base;
    int ans = get_power(base, power / 2);
    if (power % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return base * ans * ans;
    }
}
int main()
{
    int base, power;
    cout << "Enter base and power" << endl;
    cin >> base >> power;
    cout << get_power(base, power) << endl;
    return 0;
}