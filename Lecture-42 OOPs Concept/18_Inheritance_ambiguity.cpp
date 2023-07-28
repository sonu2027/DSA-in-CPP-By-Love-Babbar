#include<iostream>
using namespace std;
class father{
    public:
    int height=30;
    public:
    void func(){
        cout<<"Func of father is calling"<<endl;
    }
};
class mother{
    public:
    int weight=100;
    public:
    void func(){
        cout<<"Func of mother is calling"<<endl;
    }
};
class son:public father, public mother{
    public:
    void func(){
        cout<<"Func of child is calling"<<endl;
    }
};
int main(){
    son s1;
    s1.father::func();
    s1.mother::func();
    s1.func();
    return 0;
}