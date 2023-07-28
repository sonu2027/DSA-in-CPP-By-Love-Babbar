#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void rev(vector<vector<int>>& matrix) {
        for(int i=0; i<matrix.size(); i++){
            for(int j=i; j<matrix[i].size(); j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
    void rotate(vector<vector<int>> &matrix){
        rev(matrix);
        int end;
        for(int i=0; i<matrix.size(); i++){
            end=matrix[i].size()-1;
            for(int j=0; j<matrix[i].size()/2; j++){
                swap(matrix[i][j], matrix[i][end]);
                end--;
            }
        }
    }
};
int main(){
    Solution s;
    vector<vector<int>> matrix;
    matrix={{1,2,3}, {4,5,6}, {7,8,9}};
    s.rotate(matrix);
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}