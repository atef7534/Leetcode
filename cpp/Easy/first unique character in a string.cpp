// Problem Link : https://leetcode.com/problems/first-unique-character-in-a-string/
// Problem Hint : hash table 
// Done : Sunday 4:14 23/10/2022 
// Author : Atef Yasser Wasef 
// Level : Easy 

class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> mp ; 
        for(int i = 0 ; i < s.size() ; i++) {
            mp[s[i]]++; 
        }
        
        for(int i = 0 ; i < s.size() ; i++) {
            if(mp[s[i]] == 1){
                return i ;
            } 
        }
        return -1 ; 
    }
};