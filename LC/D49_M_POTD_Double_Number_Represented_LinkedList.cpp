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

//  2816. D49_M_POTD_Double_Number_Represented_LinkedList
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr){
            ListNode* next= curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }

    ListNode* doubleIt(ListNode* head) {
        head= reverse(head);
        ListNode* temp=head;
        int carry=0;
        while(temp){
            int num= 2*temp->val + carry;
            temp->val= num%10;
            carry= num/10;
            if(temp->next==NULL && carry>0){
                temp->next= new ListNode(carry);
                break;
            }
            temp=temp->next;
        }
        head= reverse(head);
        return head;
    }
};

// Q:https://leetcode.com/problems/double-a-number-represented-as-a-linked-list/?envType=daily-question&envId=2024-05-07