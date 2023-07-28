#include<iostream>
using namespace std;
int get_power(int base, int power){
    if(power==1)
    return base;
    return base*get_power(base,(power-1));
}
int main(){
    int base,power;
    cout<<"Enter base and power"<<endl;
    cin>>base>>power;
    cout<<get_power(base, power);
    return 0;
}