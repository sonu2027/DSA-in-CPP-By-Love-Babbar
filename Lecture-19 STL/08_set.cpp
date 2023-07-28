#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(7); s.insert(5); s.insert(6); s.insert(6);
    s.insert(6); s.insert(8); s.insert(7); s.insert(7);
    s.insert(7); s.insert(9); s.insert(7); s.insert(8);
    cout<<"The element of set 's' is: ";
    for (int i : s)
    {
        cout << i << " ";
    }cout<<endl;
    set<int>:: iterator it=s.begin();
    it++;
    s.erase(it);
    cout<<"After erasing 2nd element, the element of set 's' is: ";
    for (int i : s)
    {
        cout << i << " ";
    }cout<<endl;
    cout<<"In set 's', 5 is present or not: "<<s.count(5)<<endl;
    cout<<"In set 's', -5 is present or not: "<<s.count(-5)<<endl;

    set<int>:: iterator itr=s.find(8);
    cout<<"printing element, where from 8 is started: ";
    for (auto it = itr; it!=s.end(); it++)
    {
        cout<<*it<<" ";
    }
    
    return 0;
}