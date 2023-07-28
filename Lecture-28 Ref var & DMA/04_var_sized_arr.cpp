//var sized array using heap
#include<iostream>
using namespace std;
int get_sum(int *ptr, int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+(*ptr);
        ptr++;
    }
    return sum;
}
int main(){
    cout<<"Enter sized of array"<<endl;
    int m;
    cin>>m;
    int *arr=new int[m];
    cout<<"enter "<<m<<" elements of array"<<endl;
    for (int i = 0; i < m; i++)
    {
        cin>>arr[i];
    }
    cout<<"sum of all elements is "<<get_sum(arr,m);
    return 0;
}