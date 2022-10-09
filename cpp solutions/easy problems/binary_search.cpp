// Problem Link : https://leetcode.com/problems/binary-search 
// Problem Level : Easy 
// Done : Sunday 3:54 AM 9/10/2022 
// Hints : Binary Search , For Loop 

// Code  (First Solution Uses : Binary Search ) 
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0 , end = nums.size() - 1 ; 
        
        while(start <= end) {
            int mid = (start + end) / 2 ; 
            
            if(nums[mid] == target) return mid ; 
            else if(nums[mid] > target) end--;
            else start++; 
        }
        
        return -1 ; 
    }
}; 

// Code (Last Solution Uses : For Loop ) 
class Solution {
public:
	int search(vector<int>& nums , int target) {
		for(int i = 0 ; i < nums.size() ; i++) {
				if(nums[i] == target ) return i ; 
			}	
			return -1 ; 
		}
};
