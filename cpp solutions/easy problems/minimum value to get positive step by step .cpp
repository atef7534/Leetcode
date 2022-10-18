// Problem Link : https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/ 
// Problem Hint : sum , min 
// Level : Easy 
// Done : Tuesday 3:23PM 18/10/2022 

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int num = 0 ; 
        int sum = 0 ;
        for(int i = 0 ; i < nums.size() ; i++) {
            sum += nums[i] ; 
            num = min(sum , num);
        }
        
        return abs(num) + 1 ; 
    }
};
