//Finding cycles in linked list
//Floyd's Algorithm



bool hasCycle(ListNode* head){   //ListNode is a user defined class for Linked List

    //if the given head of the ll is null or the ll has one node it wont ever contain a cycle.
    if(head==NULL || head->next==NULL) return false;


    //Creating two pointers called fast and slow, which will move as the name suggests.
    //If the ll has a cycle these pointers will eventually meet or else fast will reach null.
    ListNode *slow=head;
    ListNode *fast=head;


    //looping though the ll.
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow) return true;
    }
    return false;
}
