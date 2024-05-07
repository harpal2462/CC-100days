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
// 445. D49_M_Add_Two_Numbers_II     using Stack
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>st1;
        stack<int>st2;
        while(l1){
            st1.push(l1->val);
            l1=l1->next;
        }  
        while(l2){
            st2.push(l2->val);
            l2=l2->next;
        }   
        ListNode* ans=NULL;
        int carry=0;
        while(!st1.empty() || !st2.empty() || carry){
            int num=0;
            if(!st1.empty()){
                num+=st1.top();
                st1.pop();
            }
            if(!st2.empty()){
                num+=st2.top();
                st2.pop();
            }
            num+=carry;
            ListNode* temp=new ListNode(num%10);
            temp->next=ans;
            ans=temp;
            carry=num/10;
        }  
        return ans;
    }
};

// Q:https://leetcode.com/problems/add-two-numbers-ii/