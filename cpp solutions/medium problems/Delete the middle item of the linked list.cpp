// Problem Link : https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
// Done : Friday 4:15 14/10/2022
// Problem Hint : Linked Lists
// Author : Atef Yasser 
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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode * loop = head;
        int counter = 0 ; 
        while(loop != NULL) {
            ++counter;
            loop = loop -> next ; 
        }
        
        
        counter = (counter % 2 == 1) ? ((counter + 1) / 2) - 1 : ((counter + 1) / 2);
        ListNode * solve = NULL ; 
        while(counter--) {
            ListNode * temp = new ListNode() ;  
            if(solve == NULL) {
                temp -> val = head -> val ;
                temp -> next = NULL;
                solve = temp ; 
            }else {
                temp -> next = solve;
                temp -> val = head -> val;
                solve = temp ; 
            }
            
            head = head -> next ;
        }
        head = head -> next;
        while(head != NULL) {
            ListNode *temp = new ListNode();
            
            temp -> next = solve ; 
            temp -> val = head -> val ;
            solve = temp ;
            
            head = head -> next ;
        }
        head = NULL ; 
        while(solve != NULL) {
            ListNode * temp = new ListNode() ; 
            temp -> val = solve -> val ; 
            if(head == NULL) {
                temp -> next = NULL;
                head = temp ; 
            }else { 
                temp -> next = head ;
                head = temp ; 
            }
            
            solve = solve -> next ; 
        }
        return head;
    }
};