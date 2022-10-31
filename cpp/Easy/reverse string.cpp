// Link : https://www.leetcode.com/problems/reverse-string/
// Hint : Two Pointers 
// Done : Monday 3:46PM 31/10/2022 
// Author : Atef Yasser Wasef 
// Level : Easy 

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0 , end = s.size() - 1 ; 
        while(start <= end) {
            swap(s[start++],s[end--]) ;
        }
        
        cout << "[" << s[0] ;
        for(int i = 1 ; i < s.size() ; i++) {
            cout << "," << s[i] ; 
        }
        cout << "]" ; 
    }
};