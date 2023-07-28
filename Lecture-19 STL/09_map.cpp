#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;//Declaration of map
    m[3]="sonu";//here, 3 is key and sonu is value
    m[9]="kumar";
    m.insert({5,"mandal"});
    cout<<"Before erase: "<<endl;//another way of initializing map
    //printing key with mapped string
    for (auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
    cout<<"3 is present or not "<<m.count(3)<<endl;
    cout<<"-3 is present or not "<<m.count(-3)<<endl<<endl;
    m.erase(3);//It will erase key 3
    cout<<"After erasing key 3: "<<endl;
    for (auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    //printing after returning iterator of 5
    auto it=m.find(5);//find() return iterator of that element
    cout<<"Iterator of 5 is: ";
    for (auto i = it; i!=m.end(); i++)
    {
        cout<<(*i).first<<" ";
    }
    
    return 0;
}