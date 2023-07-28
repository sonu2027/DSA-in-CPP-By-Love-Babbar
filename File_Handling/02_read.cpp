#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int a;
    char name[20];
    ifstream sonu;
    sonu.open("C:\\Users\\Sonu Mondal\\OneDrive\\Documents\\paint\\sonu.txt");
    sonu>>a>>name;
    cout<<a<<" "<<name;
    sonu.close();
    return 0;
}