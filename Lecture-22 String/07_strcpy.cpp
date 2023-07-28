#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char ch1[100]="sonumandal";
    char ch2[100]="anupam mishra";
    //ch1 is destination 
    //ch2 is source
    strcpy(ch1,ch2);
    cout<<ch1;
    return 0;
}