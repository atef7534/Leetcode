// Problem Link : https://leetcode.com/problems/jewels-and-stones 
// Problem Hint : Hash Table , Loops , Checking (If Conditions) 
// Done : 25/10/2022 Tuesday 2:00PM 
// Author : Atef Yasser Wasef 
// Level : Easy  


class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,bool> mpp ; 
        for(int i = 0 ; i < jewels.size() ; i++) {
            mpp[jewels[i]] = true ; 
        }
        int counter = 0 ; 
        for(auto & i : stones) {
            if(mpp[i]) counter++;
        }
        
        return counter ; 
    }
};