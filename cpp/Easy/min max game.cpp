// Problem Link : https://leetcode.com/problems/min-max-game/ 
// Problem Hint : min , max , vectors 
// Done : Tuesday 3:06 18/10/2022 
// Level : Easy 

class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int sz = nums.size() / 2;
        while(sz != 0) {
            
             for(int i = 0 ; i < sz ; i++) {
                 if(i % 2 == 1) {
                     nums[i] = max(nums[2 * i] , nums[2 * i + 1]) ;
                 }else {
                     nums[i] = min(nums[2 * i] , nums[2 * i + 1]) ;
                 }
             }
             sz /= 2 ; 
        }
        
        return nums[0] ; 
    }
};