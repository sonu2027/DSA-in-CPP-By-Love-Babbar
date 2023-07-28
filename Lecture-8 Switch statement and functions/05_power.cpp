#include<iostream>
using namespace std;
int power(){
    int a,b;
    cout<<"Enter a and b "<<endl;
    cin>>a>>b;
    int ans=1;
    for(int i=0;i<b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
    int ans=power();
    cout<<"Answer is "<<ans<<endl;
    ans=power();
    cout<<"Answer is "<<ans<<endl;
    ans=power();
    cout<<"Answer is "<<ans<<endl;
    return 0;
}