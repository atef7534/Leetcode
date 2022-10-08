// Done : Saturday 5:01 AM 8/10/2022 
// Problem Level : Easy 
// Problem Link : https://leetcode.com/problems/longest-palindrome 
// Hints : Hash Table 
// Skills : Clean Code 


class Solution {
public:
    int longestPalindrome(string s) {
        
        int odd = 0 , ans = 0 ; 
        map<char,int> mp ; 
        map<char,int>::iterator itr ; 
        for(int i = 0 ; i < s.size() ; i++) {
            mp[s[i]]++;
        }
        itr = mp.begin();
        while(itr != mp.end()) {
            if(itr->second % 2 == 1) {
                odd = 1 ; 
            }
            ans += itr->second - (itr->second % 2) ;
            itr++;
        }
        ans += odd ; 
        return ans ; 
        
    }
};