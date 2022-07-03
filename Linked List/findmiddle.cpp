Node *findMiddle(Node *head) {
    // Write your code here
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL and fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
// Node *findMiddle(Node *head) {
//     // Write your code here
//     Node* slow=head;
//     Node* fast=head->next;
//     while(fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//         }
//         slow=slow->next;
//     }
//     return slow;
// }
