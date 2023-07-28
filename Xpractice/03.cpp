class Solution {
public:
    string remove(string s){
        string ans="";
        for(int i=0; i<s.size(); i++){
            if( (s[i]>='A' && s[i]<= 'Z') || 
                (s[i]>='a' && s[i]<= 'z') ||
                (s[i]>='0' && s[i]<= '9')  ){

                ans.push_back(s[i]);

               }
        }
            return ans;
    }
    bool isPalindrome(string s) {
        string a=remove(s);
        int end=a.length()-1;
        for(int i=0; i<a.length()/2; i++){
            if(a[i]>='A' && a[i]<='Z'){
                a[i]=a[i]+32;
            }
            if(a[end]>='A' && a[end]<='Z'){
                a[end]=a[end]+32;
            }
            if(a[i]!=a[end]){
                return false;
            }
            else{
                end--;
            }           
        }
        return true;
    }
};