#include<iostream>
using namespace std;
void th(int n, char A, char B, char C){
    cout<<"Moved disk "<<n<<" from "<<
    th(n-1, A, B, C);
}
int main(){
    int n;
    char A, B, C;
    cin>>n;
    th(n,A, B, C);
    return 0;
}