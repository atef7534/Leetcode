// Link : https://leetcode.com/problems/container-with-most-water/ 
// Level : Medium 
// Done : Sunday 3:58PM 30/10/2022 
// Hint : two pointers , greedy 
// Author : Atef Yasser Wasef

class Solution {
public:
    int maxArea(vector<int>& height) {
        // Return Answer 
        int ans = 0 ; 
        int i = 0 , j = height.size() - 1 ; 
        
        // Using Two-Pointers 
        while( i < j ) {
            ans = max(ans , (j - i) * min(height[i] , height[j])) ; 
            
            if(height[i] > height[j]) {
                j--;
            }else {
                i++;
            }
        }
        return ans ; 
    }
};

