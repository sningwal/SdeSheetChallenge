Node *rotate(Node *head, int k) {
//     if(head==NULL || head->next==NULL) return head;
//     //find last node and move it to first
//     for(int i=0;i<k;i++){
//         Node* temp=head;
//         while(temp->next->next!=NULL) temp=temp->next;
//         Node* end=temp->next;
//         temp->next=NULL;
//         end->next=head;
//         head=end;
//     }
   //Optimal
    if(head == NULL||head->next == NULL||k == 0) return head;
    //calculating length
    Node* temp = head;
    int length = 1;
    while(temp->next != NULL) {
        ++length;
        temp = temp->next;
    }
    //link last node to first node-cycle
    temp->next = head;
    k = k%length; //when k is more than length of list
    int end = length-k; //to get end of the list
    while(end--) temp = temp->next;
    //breaking last node link and pointing to NULL
    head = temp->next;
    temp->next = NULL;
    return head;
}
