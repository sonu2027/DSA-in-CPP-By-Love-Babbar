#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("sonu");
    s.push("love");
    s.push("anupam");
    cout<<"The top element is: "<<s.top()<<endl;
    s.pop();
    cout<<"After popping, the top element is: ";
    cout<<s.top()<<endl;
    s.push("sonu");
    cout<<"After pushing 'sonu', the top element is: ";
    cout<<s.top()<<endl;
    cout<<"size of stack "<<s.size()<<endl;
    cout<<"stack is empty or not "<<s.empty()<<endl;
    return 0;
}