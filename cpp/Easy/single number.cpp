
// Link : https://leetcode.com/problems/single-number/
// Done : Friday 11:14PM 28/10/2022 
// Level : Easy 
// Author : Atef Yasser Wasef 
// Hint : hash map (O(N) TC)  , one for loop += 2 ( O(nlogn) TC)


// first solution 
class Solution {
	public:
		int singleNumber(vector<int>& nums) {
			map<int,int> mp ; 
			sort(nums.begin(),nums.end());
			int ans = 0 ; 
			for(int i = 0 ; i < nums.size() ; i++) mp[nums[i]]++;
			auto it = mp.begin();
			while(it != mp.end()) {
				if(it -> second == 1) {
					ans = it -> first ; 
					break; 
				}
				it++;
			}
			return ans ; 
		}
	};

// second solution 
class Solution {
	public:
		int singleNumber(vector<int>& nums) {
			sort(nums.begin(),nums.end());
			for(int i = 1 ; i < nums.size() ;  i += 2) {
				if(nums[i] != nums[i-1] return nums[i-1]; 
			}
			return nums[nums.size() - 1] ; 
		}
	};