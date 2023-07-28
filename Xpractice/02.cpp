#include<iostream>
using namespace std;
int main(){
    int n, count=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        if ((i%5==0) && ((i/5)%2==1))
        {
            count++;
        }  
        if (i==155 || i== 255 || i== 355 || i==455)
        {
            count++;
        }
        
    }
    cout<<"There are total "<< count<< " 5 in "<<n<<endl;
    return 0;
}