// C++ program to print second linked list 
// according to val in the first linked list 
#include <iostream> 
using namespace std; 

// Linked List ListNode 
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


// Function to print the second list according 
// to the positions referred by the 1st list 
void print(ListNode* head){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
}


// Driver Code 
int main() 
{ 
	struct ListNode *head = NULL;

	// Creating 2nd list 
	// 1 -> 2 -> 3 -> 4 -> 5 
    int i=1;
    while(i<=5){
        head->val=i;
        head=head->next;
       i++;
    }
	print(head);


	

	return 0; 
} 
