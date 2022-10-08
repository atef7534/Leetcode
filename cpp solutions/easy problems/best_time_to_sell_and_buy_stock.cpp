// Done : saturday 4:43 AM 8/10/2022 
// Problem Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Problem Level : Easy 

// Requirements : Basic Principles 

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // prices = [7,1,4,3,6,4] 
        int mx = INT_MAX , ans = 0 ; 
        for(int i = 0 ; i < prices.size() ; i++) {
            // you want to find the smallest number in array with every loop
            mx = (mx > prices[i]) ? prices[i] : mx ; 
            // get the max of ans and difference between current prices item and max
            ans = max(ans , prices[i] - mx) ; 
        }
        return ans ; 
    }
};