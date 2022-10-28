// Problem Link : https://leetcode.com/problems/maximum-subarray/
// Done : Thursday 1:41PM 20/10/2022
// Problem Hint : Divide and Conquer 
// Author : Atef Yasser 
// Level : Medium 

class Solution {
		public:
			int maxSubArray(vector<int>& nums) {
				// copying vector to another vector using cpp (traditional way)
				// You must search on copy() func. 
				vector<int> vec ; 
				for(int i = 0 ; i < nums.size() ; i++) {
					vec.push_back(nums[i]) ; 
				}
				// sort to check if all vec elements are less than zero or not 
				sort(vec.begin(),vec.end());

				// if all elements are less than zero return the last greatest element  
				if(vec[vec.size() - 1] <= -1 ) return vec[vec.size() - 1] ; 

				// if the size == 1 
				if(nums.size() == 1) {
					return nums[0] ; 
				}


				int totalSum = 0 , tempSum = 0 ; 
				for(int i = 0 ; i < nums.size() ; i++) {
					if(tempSum + nums[i] < tempSum) {
						totalSum = max(totalSum , tempSum) ; 
					}
					if(tempSum + nums[i] < 0) {
						totalSum = max(totalSum , tempSum) ; 
						tempSum = 0 ; 
					}else {
						tempSum += nums[i] ; 
					}
				}
				return max(totalSum , tempSum) ; 
			}
		};