#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row"<<endl;
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j >=0; j--)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}