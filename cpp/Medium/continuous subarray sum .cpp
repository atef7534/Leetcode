// Link : https://leetcode.com/problems/continuous-subarray-sum 
// Hint : How to use modulus 
// Done : Thursday 12:05 AM 27/10/2022 
// Author : Atef Yasser Wasef 
// Level : Medium 

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
    		
        map<int,int> mpp;
        // first value = 0 
        mpp[0] = 0 ; 
        // initialize the sum with zero (value) 
        int sum = 0 ;  
        // traversing 
        for(int i = 0 ; i < nums.size() ; i++) {
        	// sum of elements 
            sum += nums[i] ; 
            
            // check if sum % k not inserted before in the hashmap 
            if(!mpp.count(sum % k)) {
            	// if not inserted before ==> insert it with value i + 1  
                mpp[sum % k] = i + 1 ;
            }else if (mpp[sum % k] < i ) {
            	// if inserted before with value i less than the value of current i 
            	// return true ; 
                return true ;
            }
        }
        // return false if not all the above conditions not have been true 
        return false ; 
        
    }
};