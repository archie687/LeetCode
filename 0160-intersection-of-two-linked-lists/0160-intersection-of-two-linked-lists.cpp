/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == nullptr || headB == nullptr){
            return nullptr;
        } 

        ListNode* slow = headA;
        ListNode* fast = headB;

        while(slow != fast){
            slow = (slow == nullptr) ? headB : slow->next;
            fast = (fast == nullptr) ? headA : fast->next;
        } 
        return slow;
    }
};