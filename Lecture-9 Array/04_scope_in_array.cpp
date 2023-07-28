#include<iostream>
using namespace std;
void updatearray(int arr[]){
    arr[2]=200;
    for (int i = 0; i < 4; i++)
    {
        cout<<arr[i]<<" ";
    }
   cout<<endl;
}
int main(){
    int arr[4]={3,6,4,5};
    cout<<"Going to the update function "<<endl;
    updatearray(arr);
    cout<<"Returning back to the main function "<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}