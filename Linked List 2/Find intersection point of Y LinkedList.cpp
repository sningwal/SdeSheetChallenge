int length(Node* head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
int findIntersection(Node *firstHead, Node *secondHead)
{
  if(firstHead == NULL || secondHead == NULL) return -1;
    int l1,l2;
    l1=length(firstHead);
    l2=length(secondHead);
    Node* temp1=firstHead;
    Node* temp2=secondHead;
    if(l1-l2<0){
        int d=l2-l1;
        while(d--){
                temp2=temp2->next;
            }
        }
    else{
        int d=l1-l2;
         while(d--){
                temp1=temp1->next;
            }
    }
  while(temp1!=temp2 && temp1->next!=NULL && temp2->next!=NULL){
                temp1=temp1->next;
                temp2=temp2->next;
            }
    if(temp1==temp2){
        return temp1->data;
    }
    return -1;
}
