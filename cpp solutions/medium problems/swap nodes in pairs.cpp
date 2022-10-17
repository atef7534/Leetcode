// Problem link : https://leetcode.com/swap-nodes-in-pairs/
// problem Hint : Linked Lists , swap 
// Done : Monday 17/10/2022 2:37
// Author : Atef Yasser Wasef


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
    ListNode* swapPairs(ListNode* head) {
        if (head  == NULL || head -> next == NULL) {
            return head ; 
        }
        
        int one = 0 ;
        ListNode * sw = head ; 
        while(sw != NULL and sw -> next != NULL) {
            if(one == 0){
                int temp = sw -> val;
                sw -> val = sw -> next -> val;
                sw -> next -> val = temp ; 
                one = 1 ; 
            }else {
                one = 0 ;
            }
            sw = sw -> next ; 
            
            
        }
        
        return head ; 
    }
};