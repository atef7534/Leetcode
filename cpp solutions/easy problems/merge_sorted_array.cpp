class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // 1) sort nums1 elements to begin with zeros 
        // here we should ask question if nums1 begin with negative numbers 
        // the solution of this problem we should make a new variable and initialize it with 
        // zero value to traverse nums2 elements 
        sort(nums1.begin(),nums1.end());
        
        // 2) create variable j to traverse nums2 elements 
        int j = 0 ;
        for(int i = 0 ; i < nums1.size() && j < nums2.size() ; i++) {
            // 3) check if nums[i] == zero 
            if(nums1[i] == 0 ) {
                // 4) change the value of nums1[i]
                nums1[i] = nums2[j] ; 
                // 5) increase the value of j to reach another number of nums2 elements 
                j++ ; 
            }; 
        }
        // here we make sort to print nums1 numbers in sorting 
        sort(nums1.begin(),nums1.end()); 
        
        // printing 
        cout << "[";
        for(int i = 0 ; i < nums1.size() ; i++) {
            if(i != nums1.size() - 1) cout << nums1[i] << "," ;
            else cout << nums1[i] ;
        }
        cout << "]" ; 
    }
};