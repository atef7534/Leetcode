// Link : https://leetcode.com/problems/reverse-vowels-of-a-string/
// Hint : Two-Pointers
// Done : Friday 4/11/2022 5:30PM
// Author : Atef Yasser wasef
// Level : Easy

class Solution {
public:
    string reverseVowels(string s) {
        int j = s.size() - 1 , i = 0 ;
        string vowels = "AEIOUaeiou" ;
        while(i < j) {
            if (vowels.find(s[i]) == string::npos) {
                i++;
                continue;
            }
            if (vowels.find(s[j]) == string::npos) {
                j--;
                continue;
            }

            swap(s[i],s[j]);
            i++;
            j--;
        }

        return s ; 
    }
};