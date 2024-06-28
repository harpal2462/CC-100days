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
//  2. D49_M_Add_Two_Numbers
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* ans= new ListNode(0);
        ListNode * temp =ans;
        while(l1 || l2 || carry){
            int num1=0,num2=0;
            if(l1) num1=l1->val;
            if(l2) num2=l2->val;

            int num= num1+ num2 +carry;
            carry=num/10;

            ListNode * newNode= new ListNode(num%10);
            temp->next=newNode;
            temp=temp->next;
            
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
        }
        ListNode* result= ans->next;
        delete ans;
        return result;
    }
};

// Q:https://leetcode.com/problems/add-two-numbers/