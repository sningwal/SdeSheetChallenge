LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    if(head==NULL) return head;
    //1.make a copy node of current node  
    //then link it b/w the nodes in single linked list
    //make copy of each node,
    // and link them together side-by-side in a single list.
    LinkedListNode<int> * itr  = head; 
    while(itr!=NULL){
        LinkedListNode<int> * front=itr->next;
        LinkedListNode<int> * copy=new LinkedListNode<int>(itr->data);
        itr->next=copy;
        copy->next=front;
        itr=front;
    } 
    //2. assign random pointers for the copy nodes.
    itr=head;
    while(itr!=NULL){
//         if(itr->next!=NULL){
//             itr->next->random=itr->random!=NULL ?itr->random->next : NULL;
//         }
          if(itr->random!=NULL){
            itr->next->random=itr->random->next;
              }
        else{
             itr->next->random=NULL;
          }
        itr=itr->next->next;
    }
    //3. segregate original from copy
    itr=head;
    LinkedListNode<int> * pseudohead=new LinkedListNode<int>(0);
    LinkedListNode<int> * copy=pseudohead;
    while(itr!=NULL){
        LinkedListNode<int> * front =itr->next->next;
         //extract a copy
        copy->next=itr->next;
        copy=copy->next;
        //restore the original
        itr->next=front;
        itr=front;
    }
   return pseudohead->next;
}

