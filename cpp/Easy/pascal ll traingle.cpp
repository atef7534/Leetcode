// Problem Link : https://leetcode.com/problems/pascals-triangle-ii/ 
// LV : Easy 
// Done : monday 7:55 10/10/2022 
// Hints : vector || array , simulation 

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex == 0) return {1} ;
        if(rowIndex == 1) return {1,1} ; 
        
        vector<vector<int>> vec ; 
        vec.push_back({1});
        vec.push_back({1,1}) ; 
        
        for(int i = 2 ; i <= rowIndex ; i++) {
            vector<int> tmp ; 
            tmp.push_back(1);
            for(int j = 1 ; j < i  ; j++) {
                int x = vec[i-1][j] + vec[i-1][j-1];
                tmp.push_back(x);
            }
            tmp.push_back(1);
            vec.push_back(tmp);
        }
        
        return vec[rowIndex] ; 
        
    }
};