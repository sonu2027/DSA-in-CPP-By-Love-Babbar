class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;
        int a,ans;
        while(n!=0){
        a=n%10;
        n=n/10;
        prod=prod*a;
        sum=sum+a;
        }
        ans=prod-sum;
        return ans;
    }
};