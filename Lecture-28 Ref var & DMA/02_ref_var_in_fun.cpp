#include <iostream>
using namespace std;
void update(int &n)
{
    n += 2;
}
int main()
{
    int m = 10;
    cout << "m before update: " << m << endl;
    update(m);
    cout << "m after update: " << m << endl;
    return 0;
}