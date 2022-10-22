// Problem link : https://leetcode.com/problems/contains-duplicate-ii/ 
// Level : Easy 
// Done : Friday 8:44AM 21/10/2022 
// Author : Atef 
// Hint : Hash Table 

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> mpp;
        for(int i = 0 ; i < nums.size() ; i++) {
            if(mpp[nums[i]]) {
                if(abs(mpp[nums[i]] - (i+1)) <= k ) {
                    return true;
                }else {
                    mpp[nums[i]] = i + 1 ; 
                }
            }
            mpp[nums[i]] = i + 1;
            
        }
        return false;
    }
};