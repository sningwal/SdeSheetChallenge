bool detectCycle(Node *head)
{
    if(head==NULL || head->next==NULL){
        return false;
    }
	Node* slow=head;
    Node* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
       if(slow==fast){
        return true;
       }
   }
     return false;
}
