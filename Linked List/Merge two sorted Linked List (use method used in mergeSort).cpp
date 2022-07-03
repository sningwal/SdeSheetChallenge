Node<int>* mergetwo(Node<int>* first,Node<int>* second){
//      Node<int>* prev=first;
//      Node<int>* curr=first->next;
//      Node<int>* temp=second;
//     while(curr!=NULL and temp!=NULL){
//      if(prev->data<=temp->data and curr->data>=temp->data){
//         prev->next=temp;
//         temp=temp->next;
//         temp->next=curr;
//     }
//     else{
//         prev=prev->next;
//         curr=curr->next;
//     }
//         curr=curr->next;
//     }
    /*****if only one element is present***/
    if(first->next==NULL){
        first->next=second;
        return first;
    }
    Node<int>* curr1 = first;
    Node<int>* next1 = curr1 -> next;
    
    Node<int>*  curr2 = second;
    Node<int>*  next2 = curr2 -> next;
    
    while(next1 != NULL && curr2 != NULL) {
        
        if( (curr2 -> data >= curr1 -> data ) 
           && ( curr2 -> data <= next1 -> data)) {
            //add node
            curr1 -> next = curr2;
            next2=curr2->next;
            curr2 -> next = next1;
            //updating 
            curr1 = curr2;
            curr2 = next2;
        }
        else {
            curr1=next1;
            next1=next1->next;
            if(next1==NULL){
                curr1->next=curr2;
                return first;
            }
        }
    }
    return first;
 }

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first==NULL){
        return second;
    }
    if(second==NULL){
        return first;
    }
    if(first->data<=second->data){
        return mergetwo(first,second);
    }
    else{
       return mergetwo(second,first);
    }
}
