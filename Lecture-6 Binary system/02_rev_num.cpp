#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int ans=0,i=0;
    while(n!=0){
        int digit=n%10;
        ans=ans*10+digit;
        n=n/10;
        i++;
    }
    cout<<ans;
    return 0;
}