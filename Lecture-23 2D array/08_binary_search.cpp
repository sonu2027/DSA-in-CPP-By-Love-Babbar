#include<iostream>
using namespace std;
int bnr_srch(int arr[][4], int row, int col, int key){
    int start=0;
    int mid=row*col/2;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j]==key)
            {
                return key;
            }
            else if(arr[i][j]>key){
                start
            }
        }
        
    }
    
}
int main(){
    int arr[3][4]={ {2,3,4,5} ,{6,7,8,9}, {10,13,14} };
    bnr_srch(arr,3,4,8);
    return 0;
}