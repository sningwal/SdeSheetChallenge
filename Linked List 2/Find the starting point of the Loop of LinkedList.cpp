Node* firstNode(Node *head)
{
  if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
         if(slow==fast){
            slow=head;
             while(slow!=fast)
             {   slow=slow->next;
                 fast=fast->next;
             }
             return slow;
          }
    }
  return NULL;
}
