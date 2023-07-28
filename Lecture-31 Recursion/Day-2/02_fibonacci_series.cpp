#include <iostream>
using namespace std;
int fibo(int n)
{
    //Base case
    if(n==1)
    return 0;
    if(n==2)
    return 1;

    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n,ans;
    cout << "Enter n" << endl;
    cin>>n;
    ans=fibo(n);
    cout<<"Ans is:"<<ans;
    return 0;
}
































// if (n == 1 || n== 2)
    //     return 1;
    // return fibo(n - 1) + fibo(n - 2);