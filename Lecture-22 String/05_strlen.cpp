#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char ch1[100]="sonu mandal";
    char ch2[]={'s','o','n','u','\0'};
    cout<<strlen(ch1)<<endl;
    cout<<strlen(ch2)<<endl;
    //cout<<ch2.length()<<endl;
    return 0;
}