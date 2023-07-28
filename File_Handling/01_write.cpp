#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int a;
    char name[20];
    ofstream sonu;
    sonu.open("C:\\Users\\Sonu Mondal\\OneDrive\\Documents\\paint\\sonu.txt");
    cin>>a>>name;
    sonu<<a<<name;
    sonu.close();
    return 0;
}