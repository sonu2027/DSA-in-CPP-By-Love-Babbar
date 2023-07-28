#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row "<<endl;
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        char ch='A';
        for (int j = 0; j < row; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    
    return 0;
}