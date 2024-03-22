/* Linked List Node
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        // your code here
        Node* curr=head;
        Node* first=head;
        
        while(curr){
            if(curr->data != first->data){
                
                first->next=curr;
                first=curr;
            }
            
            curr=curr->next;
        }
        
        first->next=NULL;
        return head;
    }
};