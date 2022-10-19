// Problem Link : https://leetcode.com/problems/3sum-closest/ 
// Problem Name : 3Sum Closest 
// Done : Saturday 9:34 AM 8/10/2022
// Requirements : binary Search , search algorithms 
// Website : Leetcode 

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        // less than 3 
        if(nums.size() < 3) return 0 ; 
        // sorting
        sort(nums.begin(),nums.end()) ; 
        // sum of the first 3 elements 
        int ans = nums[0] + nums[1] + nums[2] ;
        for(int i = 0 ; i < nums.size() - 2 ; i++) {
           
           // for repeated elements in vector 
            if(i > 0 and nums[i-1] == nums[i]) continue;
            // if reach the target
            if(ans == target) break; 
            
            // binary search 
            // you can see binary search algorithm content on the website 
            // https://www.geeksforgeeks.org/binary-search/ 
            int low = i + 1 , high = nums.size() - 1 ; 
            while(low < high) {
                // handle sum after every change in low and high 
                int sum = nums[i] + nums[low] + nums[high]; 
                
                // choose the min difference to reach the desired goal 
                if(abs(target - sum) < abs(target - ans)) {
                    ans = sum ; 
                }
                
                // for ending while loop to avoid TLE (Time Limit Exceeded) 
                if(sum > target) {
                    high--;
                }else {
                    low++;
                }
                
                
            }
            
        }
        return ans ;
    }
};