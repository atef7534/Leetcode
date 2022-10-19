// Problem Hint : dynamic programming
// problem link : https://leetcode.com/problems/fibonacci-number/ 
// Done : thursday 6:32 13/10/2022 
// Author : Atef Yasser 
// Level : Easy 


class Solution {
public:
    int fib(int n) {
       // if n == 2 
        if(n == 2 or n == 1) return 1 ; 
        if(n == 0 ) return 0 ; 
        
        n -= 3 ; 
        int next = 1 ; 
        int sum = 2 ; 
        while(n--) {
            sum += next ; 
            next = sum - next ; 
        }
        
        return sum ; 
        
    }
};