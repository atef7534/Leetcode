// Problem link : https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// problem Hint : Linked Lists
// Done : Monday 17/10/2022 9:48 
// Author : Atef Yasser Wasef
Level : Medium
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * l1 = head , *l2 = head ; 
        int count = 0 ; 
        while(l1 != NULL) {
            count++;
            l1 = l1 -> next ; 
        }
        if(count == n) {
            head = head -> next;
            return head ;
        }
        count -= n ; 
        
        while(l2 != NULL and count > 1) {
            --count;
            l2 = l2 -> next;
        }
        
        l2 -> next = l2 -> next -> next ; 
        return head ; 
    }
};