#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(2);
    l.push_back(9);
    l.push_front(3);
    cout<<"The list 'l' element is: ";
    for (int i :l)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    l.erase(l.begin());
    cout<<"After erasing, the list 'l' element is"<<endl;
    for (int i :l)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    cout<<"Size of list is: "<<l.size()<<endl<<endl;

    list<int> new_l(5,100);
    cout<<"New list 'new_l' is: ";
    for (int i:new_l)
    {
        cout<<i<<" ";
    }cout<<endl<<endl;

    cout<<"After copying the new_l to copy_l, the list 'copy_l' is:"<<endl;
    list<int> copy_l(new_l);
    for (int i:copy_l)
    {
        cout<<i<<" ";
    }cout<<endl<<endl;

    copy_l.pop_back();
    cout<<"After popping, the copy_l is :"<<endl;
    for (int i:copy_l)
    {
        cout<<i<<" ";
    }cout<<endl<<endl;
    cout<<"Size of copy_l is "<<copy_l.size()<<endl<<endl;
    return 0;
}