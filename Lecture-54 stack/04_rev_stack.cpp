#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str="sonu";
    stack<char>s;
    string ans="";
    for (int i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    cout<<ans;
    return 0;
}