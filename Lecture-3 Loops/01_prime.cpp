#include <iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout << "Enter n " << endl;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            count++;
            cout<<n<<" is a not prime number "<<endl;
            break;
        }
    }
    if(count==0){
        cout<<n<<" is a prime number "<<endl;
    }
    return 0;
}