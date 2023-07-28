#include<iostream>
using namespace std;
void printWave(int arr[][4], int row, int col){
    int temp;
    int i;
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            cout<<arr[i][j]<<" ";
        }
        temp=i;
        i=j;
        j=temp;
        cout<<endl;
    }
    
}
int main(){
    int arr[3][4]={ {2,3,41,5} ,{6,7,88,2}, {1,0,9,66} };
    printWave(arr,3,4);
    return 0;
}