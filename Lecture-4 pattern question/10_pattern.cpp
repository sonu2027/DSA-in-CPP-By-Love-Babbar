#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row"<<endl;
    cin>>row;
    char ch='A';
    for (int i = 0; i < row; i++)
    {
        char sh=ch;
        ch++;
        for (int j = 0; j < row; j++)
        {
            cout<<sh<<" ";
            sh++;
        }
        cout<<endl;
    }
    
    return 0;
}