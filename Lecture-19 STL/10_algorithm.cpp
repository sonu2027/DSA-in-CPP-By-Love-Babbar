#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(5);
    v.push_back(7);
    v.push_back(10);
    cout<<"Finding 7: "<<binary_search(v.begin(),v.end(),7)<<endl;
    cout<<"Finding 1: "<<binary_search(v.begin(),v.end(),1)<<endl;
    cout<<"Lower bound:"<<lower_bound(v.begin(),v.end(),7)-v.begin()<<endl;
    cout<<"upper bound:"<<upper_bound(v.begin(),v.end(),7)-v.begin()<<endl;
    int a=2;
    int b=3;
    cout<<"max: "<<max(a,b)<<endl;
    cout<<"min: "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"after reversing string 'abcd' will be: "<<abcd<<endl;
    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"After rotating, vector 'v' e;lement wil be: ";
    for (int i :v)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"After sorting, Vector 'v' e;ement will be: ";
    sort(v.begin(),v.end());
    for (int i :v)
    {
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}