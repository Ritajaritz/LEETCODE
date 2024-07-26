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
        ListNode* current = head;
        ListNode* prev= NULL;
        while(current!=NULL){
            ListNode* next= current->next;
            current->next= prev;
            prev= current;
            current= next;
        }
        //when the loop ends the prev pointer is pointing at the new head
        ListNode* new_head= prev;
        return new_head;

    }
};