// Problem Link : https://leetcode.com/problems/valid-anagram/ 
// Problem Hint : sorting 
// Done : Sunday 4:31PM 23/10/2022 
// Author : Atef Yasser Wasef 
// Level : Basic 

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return t == s ; 
    }
};