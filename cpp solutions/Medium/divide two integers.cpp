// Problem Link : https://leetcode.com/problems/divide-two-integers/ 
// Problem Hint : You should know the INT_MIN and INT_MAX in cpp 
// Done : Wednesday 6:39 PM 19/10/2022 
// Level : Medium 

class Solution {
public:
    int divide(int dividend, int divisor) { 
        long long v = dividend;
        if(v / divisor < INT_MIN ) {
            return INT_MIN ; 
        }
        
        if(v / divisor > INT_MAX) {
            return INT_MAX ; 
        }
        
        return v / divisor ; 
        
    }
};