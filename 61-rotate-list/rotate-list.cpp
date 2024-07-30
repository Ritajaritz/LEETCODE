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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next ==NULL){
            return head;
        }
        ListNode* dummy= head;
        int count=1;
        while(dummy->next!=NULL){
            dummy=dummy->next;
            count++;
        }
        k=k%count;
        for(int i=0;i<k;i++){
            ListNode* h= head;
            ListNode* p= head;
            ListNode* c= head;
            while(h->next!=NULL){
                h= h->next;


            }
            while(p->next->next!=NULL){
                p=p->next;
            }
            h->next=c;
            p->next=NULL;
            head = h;
        
        }
        return head;

    }
};