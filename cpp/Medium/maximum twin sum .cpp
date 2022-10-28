// Problem Link : https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/
// Problem Hint : linked lists
// Done : Sunday 4:34PM 23/10/2022 
// Author : Atef Yasser Wasef 
// Level : Medium 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode * cpy = head ; 
        vector<int> vec ; 
        while(cpy != NULL) {
            vec.push_back(cpy -> val)  ; 
            cpy  = cpy -> next ; 
        }
        int sum = 0 ; 
        for(int i = 0 ; i < vec.size() / 2  ; i++) {
            sum = max(sum , vec[i] + vec[vec.size() - 1 - i]);
        }
        
        return sum ; 
    }
};
};