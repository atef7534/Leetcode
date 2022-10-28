// Problem Link : https://leetcode.com/problems/ransom-note/
// Problem Hint : hash table 
// Done : sunday 4:27 23/10/2022 
// Author : Atef Yasser Wasef 
// Level : Easy 

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size() > magazine.size()) return false ; 
        vector<int> container (26,0) ; 
        for(int i = 0 ; i < magazine.size() ; i++) {
            container[magazine[i] - 'a']++; 
        }
        
        for(int i = 0 ; i < ransomNote.size() ; i++) {
            if(container[ransomNote[i] - 'a'] == 0) return false;
            else container[ransomNote[i] - 'a']-- ; 
        }
        
        return true; 
        
        
        
        
    }
};