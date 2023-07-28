#include<iostream>
using namespace std;
void prime(int n){
    int i,count=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count=1;
            break;
        }
    }
    if(count==0 && (n!=0 && n!=1)){
        cout<<n<<" is a prime number "<<endl;
    }
    else if(n==0 && n==1){
        cout<<n<<" is not a prime number "<<endl;
    }
    else{
        cout<<n<<" is not a prime number "<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    prime(n);
    return 0;
}