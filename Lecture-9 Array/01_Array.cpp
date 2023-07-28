#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    int i;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n=10;
    int first[n]={1,6};
    for (int i = 0; i < n; i++)
    {
        cout<<first[i]<<" ";
    }
    cout<<endl;

    int second[20]={1,2,3};
    int sizeofsecond=sizeof(second)/sizeof(int);
    cout<<"size of second is "<<sizeofsecond<<endl;

    int third[12]={13,8};
    int size=12;
    printarray(third,12);

    int sizeofthird=sizeof(third)/sizeof(int);
    cout<<"Size of third is "<<sizeofthird<<endl;

    char ch[]={'s','o','n','u'};
    int i=0;
    for (int i = 0; i < 4; i++)
    {
        cout<<ch[i]<<" ";
    }
    return 0;
}