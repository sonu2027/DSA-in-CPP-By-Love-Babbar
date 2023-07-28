#include<iostream>
using namespace std;
void reachHOME(int src, int dest){
    cout<<"source="<<src<<" "<<dest<<endl;
    //Base case
    if(src==dest){
        cout<<"pauch gye ghar";
        return;
    }
    //Processing part
    src++;
    //Recursive relation
    reachHOME(src, dest);
}
int main(){
    int src=1;
    int dest=10;
    reachHOME(src, dest);
    return 0;
}