#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter row"<<endl;
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < row; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}