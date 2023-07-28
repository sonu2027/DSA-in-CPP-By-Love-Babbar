#include<iostream>
using namespace std;
bool isEvenorOdd(){
    int n;
    cout<<"Enter n "<<endl;
    cin>>n;
    switch (n%2)
    {
    case true:cout<<n<<" is odd"<<endl;
        break;
    
    case false:cout<<n<<" is even"<<endl;
        break;
    }
    return 0;
}
int main(){
    isEvenorOdd();
    isEvenorOdd();
    return 0;
}