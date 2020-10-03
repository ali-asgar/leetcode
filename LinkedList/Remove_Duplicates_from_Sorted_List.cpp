/*
83. Remove Duplicates from Sorted List - Easy

Given a sorted linked list, delete all duplicates such that each element appear only once.

Example 1:
Input: 1->1->2
Output: 1->2

Example 2:
Input: 1->1->2->3->3
Output: 1->2->3
*/

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
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return 0;
        if (!head -> next) return head;
        
        if (head -> val == head -> next -> val)
        {
            if (head -> next && head -> val == head -> next -> val)
                head -> next = head -> next -> next;
            return deleteDuplicates(head);
        }
        deleteDuplicates(head -> next);
        return head;
    }
};
