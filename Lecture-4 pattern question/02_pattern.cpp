#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row"<<endl;
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout<<j+1+(row*i)<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}