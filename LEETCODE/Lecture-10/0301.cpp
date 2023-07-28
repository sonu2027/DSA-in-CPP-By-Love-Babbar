//1207: Unique number of occurances
#include<iostream>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n;
        int u[]={0};
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                    u[i]=count;
                }
            }
               
           } 

          for(int k=0;k<n;k++){
              int counts=0;
              for(int l=0;l<n;l++){
                  if(u[k]==u[l]){
                      counts++;
                  }
              }
            if(counts==2){
                return false;
            }
            else{
                continue; 
            }
          }
        
        return true;
    }
};
int main(){
    
    return 0;
}