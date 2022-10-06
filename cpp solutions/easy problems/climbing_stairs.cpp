// problem link : https://leetcode.com/problems/climbing-stairs/ 
// done : 6/10/2022 thursday 
// level : easy 
// number : 46 

// code 
class Solution {
public:
    int climbStairs(int n) {
        vector<int> vec;
        if(n <= 3) return n; 
        vec.push_back(2);
        vec.push_back(3);
        
        for(int i = 3 ; i < n ; i++) {
            int x = vec.back() + vec[vec.size() - 2] ;
            vec.push_back(x);
        }
        return vec.back() ; 
    }
};