#include <iostream>
using namespace std;
void print_count(int n)
{
    ///Base case
    if(n==0)
    return;

    cout<<n<<" ";

    //Recursive relation
    print_count(n-1);
}
int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    print_count(n);
    return 0;
}