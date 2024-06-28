/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
//  92. D50_M_Reverse_Linked_List_II
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;
        ListNode dummy(0);     // dummy is an object not pointer
        dummy.next=head;
        ListNode*prev= &dummy;
        for(int i=0;i<left-1;i++){
            prev=prev->next;
        }
        ListNode* curr=prev->next;
        ListNode* next=NULL;
        ListNode* leftside_tail= prev;
        ListNode* rightside_tail= curr;

        for(int i=0;i<right-left+1;i++){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }

        leftside_tail->next=prev;
        rightside_tail->next=curr;

        return dummy.next;
    }
};



// Q:https://leetcode.com/problems/reverse-linked-list-ii/
// A:https://leetcode.com/problems/reverse-linked-list-ii/solutions/4011862/92-40-two-pointers-stack-recursion

// Use . to access members of an object directly.
// Use -> to access members of an object through a pointer.