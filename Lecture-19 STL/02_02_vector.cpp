#include <iostream>
#include <vector>
using namespace std;
vector<int> fun(vector<int> &ref)
{
    vector<int> ans;
    for (int i = 0; i < ref.size(); i++)
        ans.push_back(ref[i] + 2);
    return ans;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.pop_back();
    vector<int> answer(fun(v));
    for (int i = 0; i < answer.size(); i++)
        cout << answer[i] << " ";
    return 0;
}