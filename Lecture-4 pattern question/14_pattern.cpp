#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row"<<endl;
    cin>>row;
    char ch='A';
    for (int i = 1; i < row; i++)
    {
        ch++;
    }
    
    for (int i = 0; i < row; i++)
    {
        ch=ch-i;
        for (int j = 0; j <= i; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        ch--;
        cout<<endl;
    }
    
    return 0;
}