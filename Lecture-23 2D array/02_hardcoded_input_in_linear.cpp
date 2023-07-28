#include<iostream>
using namespace std;
int main(){
    //Hardcoded input in linear way
    int arr[4][3]={12,3,4,5,8,9,234,54,30,44,11,1};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}