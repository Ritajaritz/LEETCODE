/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB== NULL){
            return NULL;
        }
        //creating dummy nodes;
        ListNode*a = headA;
        ListNode*b = headB;
        while(a != b) {
            if(a == NULL) {
                a = headB;  // If pointer a reaches the end of list A, move it to the head of list B
            } else {
                a = a->next;  // Otherwise, move it to the next node
            }

            if(b == NULL) {
                b = headA;  // If pointer b reaches the end of list B, move it to the head of list A
            } else {
                b = b->next;  // Otherwise, move it to the next node
            }
        }

        return a;
        
    }
    
};