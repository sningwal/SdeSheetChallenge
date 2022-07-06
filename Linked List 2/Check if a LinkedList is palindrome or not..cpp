LinkedListNode<int>* reverse(LinkedListNode<int>* head){
    if(!head || !head->next)
        return head;
    LinkedListNode<int>* cur=head;
    LinkedListNode<int>* forward=NULL;
    LinkedListNode<int>* prev=NULL;
    while(cur!=NULL){
        forward=cur->next;
        cur->next=prev;
        prev=cur;
        cur=forward;
      }
    return prev;
}

bool isPalindrome(LinkedListNode<int> *head) {
    if(head==NULL || head->next==NULL){
        return true;
       }
    //LinkedListNode<int>* head1=reverse(head);
    //find middle
    LinkedListNode<int>* slow=head;
    LinkedListNode<int>* fast=head;
      while(fast->next!=NULL && fast->next->next!=NULL){
               fast=fast->next->next;
                slow=slow->next;
          }
    //reverse second half
     LinkedListNode<int>* nH=reverse(slow->next);
    //check for palindrome ->match
    while(head!=NULL && nH!=NULL){
          if(head->data!=nH->data){
              return false;
          }
        head =head->next;
        nH=nH->next;
    }
    return true;
}
