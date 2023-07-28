#include<iostream>
using namespace std;
void sort(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
        int min_index=i;
        for (int j = i+1; j < size; j++)
        {   
            if (arr[min_index]>arr[j])
            {
                min_index=j;
            }
            
        }
        swap(arr[i],arr[min_index]);
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={64,25,12,5,11};
    sort(arr,5);
    return 0;
}