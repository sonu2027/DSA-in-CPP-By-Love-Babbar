#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char ch1[100]="sonumandal";
    char ch2[100]="sonu mandal";
    char ch3[100]="sonumandal";
    cout<<strcmp(ch1,ch2)<<endl;
    cout<<strcmp(ch1,ch3)<<endl;
    cout<<strcmp(ch2,ch3)<<endl;
    cout<<strcmp(ch2,ch1)<<endl;
    cout<<strcmp(ch3,ch1)<<endl;
    cout<<strcmp(ch3,ch2)<<endl;
    return 0;
}