#include <iostream>
#include <vector>
using namespace std;
vector<string> fun(vector<string> &ref)
{
    vector<string>ans;
    for (int i = ref.size(); i >= 0; i--)
    {
        ans.push_back(ref[i]);
    }
    return ans;
}
int main()
{
    // Concept of string
    vector<string> str;
    str.push_back("sonu");
    str.push_back("bipin");
    str.push_back("kumkum");
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
    for (string i : str)
    {
        cout << i << " ";
    }
    cout << endl;
    // Sending in function
    vector<string> answer(fun(str));
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i]<<" ";
    }
    return 0;
}