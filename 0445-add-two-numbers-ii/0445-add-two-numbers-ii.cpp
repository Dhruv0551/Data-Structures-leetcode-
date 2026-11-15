class Solution {
public:
    ListNode* reverse(ListNode* l) {
        ListNode* prev = nullptr;
        ListNode* curr = l;

        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        l1 = reverse(l1);
        l2 = reverse(l2);

        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        int carry = 0;

        while (l1 || l2 || carry) {

            int sum = carry;

            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;

            tail->next = new ListNode(sum % 10);
            tail = tail->next;
        }

        ListNode* ans = reverse(dummy->next);
        return ans;
    }
};