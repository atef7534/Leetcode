// Link : https://www.leetcode.com/problems/move-zeroes/
// Hint : Two Pointers  
// Done : Monday 3:37PM 31/10/2022 
// Author : Atef Yasser Wasef 
// Level : Easy


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       // 0 1 0 3 12 
       // 1 0 0 3 12
        
       int current = 0 , next = 1 ; 
        while(next != nums.size()) {
            if(nums[current] == 0) {
                if(nums[next] != 0) {
                    swap(nums[current],nums[next]);
                    next++;
                    current++;
                }else {
                    next++;
                    continue; 
                }
            }else {
                current++;
                next++;
            }
        }
        cout << "[" << nums[0];
        for(int i = 1 ; i < nums.size() ; i++) {
            cout << "," << nums[i] ; 
        }
        cout << "]" ; 
           
        
       
    }
};