// Problem Hint : matrix , binary search 
// Problem Link : https://leetcode.com/problems/search-a-2d-matrix
// Level : Medium 
// Author : Atef yasser Wasef 
// Done : 22/10/2022 9:09AM Saturday 
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ans = false ; 
        int col = matrix[0].size() ; 
        for(int i = 0 ; i < matrix.size() ; i++ ) {
            if(matrix[i][col - 1] >= target) {
                if(matrix[i][col - 1] == target) {
                    ans = true;
                    break;
                } ; 
                int start = 0 , end = col - 1 ; 
                while(start <= end) {
                    int mid = (start + end) / 2 ; 
                    
                    if(matrix[i][mid] == target) {
                        ans = true; 
                    }
                    
                    if(matrix[i][mid] > target) {
                        end = mid - 1 ;
                    }else {
                        start = mid + 1 ; 
                    }
                }
            }
        }
        return ans ; 
    }
};