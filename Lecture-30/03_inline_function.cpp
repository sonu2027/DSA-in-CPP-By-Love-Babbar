#include <iostream>
using namespace std;
inline int get_max(int &a, int &b)
{
    return (a > b) ? a : b;
}
int main()
{
    int a = 5, b = 3;
    int ans;
    ans = get_max(a, b);
    cout << ans << endl;
    a += 1;
    b += 5;
    ans = get_max(a, b);
    cout << ans << endl;
    return 0;
}