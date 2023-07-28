#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row"<<endl;
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 1; j <i+2; j++)
        {
            cout<<j+i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}