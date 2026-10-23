
// https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_end=matrix.size();
        int row_first=-1;
        
        
        while(row_first+1<row_end){
            int row_mid=row_first+(row_end-row_first)/2;
            int col_end=matrix[0].size();
            int col_first=-1;
            while(col_first+1<col_end){
                int col_mid=col_first+(col_end-col_first)/2;
                if(matrix[row_mid][col_mid]<target)col_first=col_mid;
                else if(matrix[row_mid][col_mid]>target)col_end=col_mid;
                else return true;
            }
            if(col_end==matrix[0].size())row_first=row_mid;
            else if(col_first==-1)row_end=row_mid;
            else return false;
        }
        return false;
    }
};