// Problem link : https://leetcode.com/problems/check-if-the-sentence-is-pangram/
// problem Hint : hash table
// Done : Monday 17/10/2022 9:56 
// Author : Atef Yasser Wasef
 
class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,bool> checkers ; 
        for(int i = 0 ; i < sentence.size() ; i++) {
            checkers[sentence[i]] = true;
        }
        int x = 25 ; 
        for(int i = 0 ; i <= 25 ; i++) {
            if(!checkers['a'+i]) return false;
        }
        return true ;
    }
};