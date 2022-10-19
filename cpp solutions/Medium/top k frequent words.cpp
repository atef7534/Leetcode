// Problem Link : https://leetcode.com/problems/top-k-frequent-words 
// Problem Level : Medium 
// Done : 19/10/2022 Wednesday 7:10PM
// Hint : How To Sort Well , and what is Bucket sort 
// Author : Atef Yasser Wasef 

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> mapsTextToNumber ; 
        for(int i = 0 ; i < words.size() ; i++) {
            mapsTextToNumber[words[i]]++;
        }
        vector<pair<string,int>> vec ; 
        
        copy(mapsTextToNumber.begin(),
            mapsTextToNumber.end(),
            back_inserter<vector<pair<std::string, int>>>(vec));
        
        sort(vec.begin(), vec.end(),
            [](const pair<std::string, int> &l, const pair<std::string, int> &r)
            {
                if (l.second != r.second) {
                    return l.second < r.second;
                }
 
                return l.first > r.first;
            });
        vector<string> newVec ; 
        for(int i = 0 ; i < k ; i++) {
            newVec.push_back(vec[vec.size() - i - 1].first) ; 
        }
        
        return newVec ; 
        
        
        
    }
};