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
// 2487. D47_M_Remove_Nodes_From_Linked_List 
// Can be solved using recursion also.

class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp= head;
        stack<int>st;
        while(temp){
            while(!st.empty() && temp->val>st.top()){
                st.pop();
            } 
            st.push(temp->val);
            temp=temp->next;
        }
        ListNode* ans=NULL;
        while(!st.empty()){
            ListNode* newNode= new ListNode(st.top());
            newNode->next=ans;
            ans=newNode;
            st.pop();
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/remove-nodes-from-linked-list/description/
