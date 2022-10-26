// Problem Link : https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent
// Problem Hint : Strings , Loops 
// Done : Tuesday 1:53PM 25/10/2022 
// Author : Atef Yasser Wasef 
// Level : Easy 

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string one , two ; 
        for(int i = 0 ; i < word1.size() ; i++) {
            one += word1[i] ; 
        }
        for(int i = 0 ; i < word2.size() ; i++) {
            two += word2[i] ; 
        }
        return one == two ; 
    }
};