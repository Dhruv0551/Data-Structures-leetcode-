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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == nullptr) return 0;
        int size = 0;
        ListNode *temp = head;
        while (temp != nullptr)
        {
            size++;
            temp = temp->next;
        }

        int idx = size - n;

        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        temp = dummy;
        while(idx--)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;

        return dummy->next;
    }
};