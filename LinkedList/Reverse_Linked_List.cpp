/*
206. Reverse Linked List - Easy

Reverse a singly linked list.

Example:
Input: 1->2->3->4->5->NULL
Output: 5->4->3->2->1->NULL

Follow up:
A linked list can be reversed either iteratively or recursively. Could you implement both?
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
    ListNode* reverseList(ListNode* head) {
        if (!head) return NULL;
        if (!head -> next) return head;

        //Recursive
/*	    ListNode* nextNode = head -> next;
	    head -> next = NULL;
	    ListNode* prevNode = reverseList(nextNode);
	    nextNode -> next = head; 
	return prevNode;      */   
        
        //Iterative
        ListNode* prevNode = NULL; 
        while (head != NULL) {
            ListNode* nextNode = head -> next;
            head -> next = prevNode;
            prevNode = head;
            head = nextNode;
        }
        return prevNode; 
    }
};
