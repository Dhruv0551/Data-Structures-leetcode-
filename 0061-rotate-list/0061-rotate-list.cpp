
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next) return head;

        ListNode* tail = head;
        int size = 1;

        while (tail->next) {
            tail = tail->next;
            size++;
        }

        k %= size;
        if (k == 0) return head;

        ListNode* newTail = head;

        for (int i = 0; i < size - k - 1; i++) {
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;

        tail->next = head;
        newTail->next = nullptr;

        return newHead;
    }
};
