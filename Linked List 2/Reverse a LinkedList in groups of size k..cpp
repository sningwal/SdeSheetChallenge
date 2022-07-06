Node* reverse(Node* head, Node* tail){
    Node *prev = NULL;
    while(prev != tail){
        Node* next = head -> next;
        head -> next = prev;
        prev = head;
        head = next;
    }
    return prev;
    
}
Node *getListAfterReverseOperation(Node *head, int n, int b[]){
  if(n == 0 || head == NULL || head ->next == NULL)
        return head;
    int k=b[0];
    if(k==0){
     return getListAfterReverseOperation(head, n-1, b + 1);
    }
    Node* currTail = head;
    for(int i = 0; i < k - 1 && currTail -> next != NULL; i++)
        currTail = currTail -> next;
    Node* nextBlockHead = currTail -> next;
    Node* newHead = reverse(head, currTail);
    head -> next = getListAfterReverseOperation(nextBlockHead, n - 1, b + 1);
    return newHead;
}
