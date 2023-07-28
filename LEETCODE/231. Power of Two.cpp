class Solution {
public:
    bool isPowerOfTwo(int n) {
        int p=0,i=0;
        if(n==0){
            return 0;
        }
        while(p<n){
            if((p>INT_MAX/2) || (p<INT_MIN/2)){
                return 0;
            }
            p=pow(2,i);
            i++;
        }
        if(p==n){
            return 1;
        }
        else{
            return 0;
        }
    }
};