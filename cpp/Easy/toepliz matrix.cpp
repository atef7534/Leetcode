// Link : https://leetcode.com/problems/toepliz-matrix/
// Level : Easy 
// Hint : matrix , array 
// Done : 31/10/2022
// Author : Atef Yasser Wasef

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
      for(int i = 0 ; i < matrix.size() ; i++) {
          for(int j = 0 ; j < matrix[0].size() ; j++) {
              if(i != 0 and j != 0 and matrix[i-1][j-1] != matrix[i][j]) {
                  return false ; 
              }
          }
      }
        return true ;
    }
};