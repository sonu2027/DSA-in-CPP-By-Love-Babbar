#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    bool isprime=1;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            //cout<<n<<" is not a prime number"<<endl;
            isprime=0;
            break;
        }
    }
    if(isprime==0){
        cout<<n<<" is not prime number"<<endl;
    }
    else{
        cout<<n<<" is a  prime number"<<endl;
    }
    
    return 0;
}