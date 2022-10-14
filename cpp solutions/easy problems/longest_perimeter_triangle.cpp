// Problem Hint : search math and sorting
// problem link : https://leetcode.com/problems/largest-perimeter-triangle/ 
// Done : thursday 6:13 13/10/2022 
// Author : Atef Yasser 
// Level : Easy 


class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>()) ; 
        
        
        int sum = 0 ; 
        for(int i = 0 ; i < nums.size() - 2 ; i++) {
            int a = nums[i] , b = nums[i+1] , c = nums[i+2] ; 
            if(a < b + c) {
                sum = max(sum , a+b+c) ; 
            }
        }
        return sum ; 
    }
};