// Problem Link : https://leetcode.com/problems/reverse-linked-list/ 
// LV : Easy 
// Done : Friday 9:36 14/10/2022 
// Hints : Linked List 


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
    ListNode* reverseList(ListNode* head) {
        ListNode * reverseList = NULL ; 
        
        while(head != NULL) {
            ListNode * temp = new ListNode() ; 
            temp -> val = head -> val ; 
            if(reverseList == NULL) {
                temp -> next = NULL ; 
                reverseList = temp ; 
            }else {
                temp -> next = reverseList;
                reverseList = temp ; 
            }
            head = head -> next ; 
        }
        
        return reverseList;
        
    }
};