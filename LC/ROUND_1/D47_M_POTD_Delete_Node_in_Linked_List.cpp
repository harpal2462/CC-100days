/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
// 237. D47_M_POTD_Delete_Node_in_Linked_List
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
    }
};

// Q:https://leetcode.com/problems/delete-node-in-a-linked-list/?envType=daily-question&envId=2024-05-05