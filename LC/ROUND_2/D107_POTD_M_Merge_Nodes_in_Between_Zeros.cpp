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
// 2181. D107_POTD_M_Merge_Nodes_in_Between_Zeros
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp= head->next;
        ListNode* ans=head;
        int sum=0;
        while(temp){
            sum+=temp->val;
            if(temp->val==0){
                ans->val=sum;
                if(temp->next) ans=ans->next;
                sum=0;
            }
            temp=temp->next;
        }
        ans->next=nullptr;
        return head;

    }
};

// Q:https://leetcode.com/problems/merge-nodes-in-between-zeros/solutions/5412081/solution-in-o-1-s-c/