/*
82. Remove Duplicates from Sorted List II - Medium

Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.
Return the linked list sorted as well.

Example 1:
Input: 1->2->3->3->4->4->5
Output: 1->2->5

Example 2:
Input: 1->1->1->2->3
Output: 2->3
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
