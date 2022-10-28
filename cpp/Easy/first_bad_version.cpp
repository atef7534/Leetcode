// Problem Link : https://leetcode.com/problems/binary-search 
// Problem Level : Easy 
// Done : Sunday 4:26 AM 9/10/2022 
// Hints : Binary Search , For Loop 

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
       int start = 0 , end = n , ans ; 
       while(start <= end) { 
           int mid = start + (end - start) / 2 ; 
           
           if(isBadVersion(mid)) {
               ans = mid ; 
               end = mid - 1 ;
           }else {
               start = mid + 1 ; 
           }
       }
        return ans  ; 
    }
};


class Solution {
public:
    int firstBadVersion(int n) {
        
        while(n--) {
            if(!isBadVersion(n)) return ++n;
        }
        return 0 ; 
    }
};