Node* mergeL(Node* left,Node* right){
    if(left==NULL){
        return right;
    }
    if(right==NULL){
        return left;
    }
    Node* ans=NULL;
        if(left->data<=right->data){
            ans=left;
            left->child=mergeL(left->child,right);
        }
        else
        {
              ans=right;
            right->child=mergeL(left,right->child);
        }
    ans->next=NULL;
    return ans;
}
Node* flattenLinkedList(Node* head) 
{
    if( head==NULL || head->next==NULL){
        return head;
    }
    Node* right=head->next;
    Node* down=head;
    down->next=NULL;
    right=flattenLinkedList(right);
    return mergeL(down,right);
}

