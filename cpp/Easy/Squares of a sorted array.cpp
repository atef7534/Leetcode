// Link : https://www.leetcode.com/problems/squares-of-a-sorted-array/
// Hint : Two pointers , loops 
// Done : Sunday 6:00PM 30/10/2022
// Author : Atef Yasser wasef
// Level : Easy

// The difference here for Time 
// Two Pointers 
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v(nums.size());
        int i = 0 , j = nums.size() - 1 , k = nums.size() - 1 ; 
        
        while(i <= j) {
            if(abs(nums[i]) > abs(nums[j])) {
                v[k--] = nums[i] * nums[i] ; 
                i++;
                continue ; 
            }
            
            v[k--] = nums[j] * nums[j] ; 
            j--; 
        }
        return v ;
    }
};

// Tradition Method 
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0 ; i < nums.size() ; i++) {
            nums[i] *= nums[i] ; 
        }
        sort(nums.begin(),nums.end());
        return nums ; 
    }
};


