class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right) return head;

        ListNode dummy(0);
        dummy.next = head;

        ListNode *tempHead = &dummy;

        int pos = left - 1;

        while(pos)
        {
            tempHead = tempHead->next;
            pos--;
        }

        int diff = right - left;

        ListNode *temp = tempHead->next;
        ListNode *temp2 = temp->next;
        ListNode *tail = temp;

        while(diff)
        {
            ListNode *temp3 = temp2->next;

            temp2->next = temp;
            temp = temp2;
            temp2 = temp3;

            diff--;
        }

        tempHead->next = temp;
        tail->next = temp2;

        return dummy.next;
    }
};