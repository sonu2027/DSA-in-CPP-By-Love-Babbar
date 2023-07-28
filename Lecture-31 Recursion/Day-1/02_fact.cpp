#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int ans=1;
    for(int i=n; i>=2; i--){
        ans=ans*i;
    }
    cout<<ans;
    return 0;
}