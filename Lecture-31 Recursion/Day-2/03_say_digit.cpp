#include<iostream>
using namespace std;
void say_digit(int n, string arr[]){
    if(n==0)
    return;
    
    int r=n%10;
    n=n/10;
    say_digit(n, arr);

    cout<<arr[r-1]<<" ";
}
int main(){
    string arr[10]={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    say_digit(n, arr);
    return 0;
}