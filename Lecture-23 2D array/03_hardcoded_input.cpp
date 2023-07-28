#include<iostream>
using namespace std;
int main(){
    // Row wise hardcoded input
    int arr[3][4]={ {1,2,5,30}, {3,4,20,50}, {23,9,0,65} };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}