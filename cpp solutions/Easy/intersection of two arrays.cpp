// Problem Link : https://leetcode.com/problems/intersection-of-two-arrays-ii 
// Hint : hash table 
// Done : Thursday 5:48 20/10/2022 
// Level : Easy 
// Complexity : Time O(2) 

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersection ; 
        map<int,int> mpp ;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end()) ; 
        
        if(nums1.size() > nums2.size()) {
            for(int i = 0 ; i < nums1.size() ; i++) {
                mpp[nums1[i]]++;
            }
            
            for(int i = 0 ; i < nums2.size() ; i++) {
                if( mpp[nums2[i]] > 0 ) {
                    mpp[nums2[i]]-- ; 
                    intersection.push_back(nums2[i]) ; 
                }
            }
        }else {
            for(int i = 0 ; i < nums2.size() ; i++) {
                mpp[nums2[i]]++;
            }
            for(int i = 0 ; i < nums1.size() ; i++) {
                if( mpp[nums1[i]] > 0 ) {
                    mpp[nums1[i]]-- ; 
                    intersection.push_back(nums1[i]) ; 
                }
            }
        }
        return intersection ; 
        
        
        
        
    }
};