#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    int differenceOfSum(vector<int> &nums)
    {
        int sum1=0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum1 = sum1 + nums[i];
        }
        int sum2 = 0;
        int a, b;
        for (int j = 0; j < nums.size(); j++)
        {
            b = nums[j];
            while (b != 0)
            {
                a = b % 10;
                sum2 = sum2 + a;
                b = b / 10;
            }
        }
        return (sum1 - sum2);
    }
};
int main(){
    Solution S;
    //S.differenceOfSum();
    return 0;
}