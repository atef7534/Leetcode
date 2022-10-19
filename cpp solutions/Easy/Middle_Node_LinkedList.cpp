// Problem Link : https://leetcode.com/problems/middle-of-the-linked-list
// Problem Hint : Linked List 
// Done : thursday 12:00 13/10/2022
// Author : Atef Yasser 
// Level : Easy 


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
    ListNode* middleNode(ListNode* head) {
        ListNode * temp = head ; 
        int count = 0 ; 
        while(temp != NULL) {
            ++count;
            temp = temp -> next ; 
        }
        
        count /= 2 ; 
        while(head != NULL and count > 0) {
            --count;
            head = head -> next;
        }
        
        return head ; 
    }
};