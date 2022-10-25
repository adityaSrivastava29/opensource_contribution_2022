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
    ListNode* reverseKGroup(ListNode* head, int k) {
            if(k==0) return head;
    
    ListNode *temp=head;  //to ensure there are k nodes present in LL to reverse, else return head
    for(int i=0;i<k;i++){
        if(temp==NULL) return head;
        temp=temp->next;
    }

        ListNode* prevptr=NULL;
        ListNode* curptr=head;
        ListNode* nextptr;
        int count=0;
        while(curptr!=NULL && count<k){
            nextptr=curptr->next;
            curptr->next=prevptr;
            prevptr=curptr;
            curptr=nextptr;
            count++;
        }
        
        if(nextptr!=NULL){
            head->next=reverseKGroup(nextptr,k);
        }
        return prevptr;
        
    }
};