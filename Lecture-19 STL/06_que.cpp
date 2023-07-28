#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("sonu");
    q.push("golu");
    q.push("mota");
    cout<<"Front string is: "<<q.front()<<endl;
    cout<<"size of queue before pop is: "<<q.size()<<endl;
    q.pop();
    cout<<"size of queue after pop is: "<<q.size()<<endl;
    cout<<"After popping, the front string is: "<<q.front()<<endl<<endl;
    return 0;
}