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
    ListNode* removeElements(ListNode* head, int k) {
        if(!head) return nullptr;
        ListNode *curr = head;
        ListNode* dummy = new ListNode(0);
        ListNode *prev = dummy;
        dummy->next = head;
        while(curr && curr->next)
        {
            if(curr->val == k)
            {
                curr->val = curr->next->val;
                curr->next = curr->next->next;
                continue;
            }
            prev = prev->next;
            curr = curr->next;
        }
        if(curr->val == k) prev->next = nullptr;
        return dummy->next;
    }
};