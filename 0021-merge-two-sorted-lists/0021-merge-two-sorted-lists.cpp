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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1)
            return list2;
        if (!list2)
            return list1;
        ListNode* dummy = new ListNode(0);
        ListNode* newHead = dummy;
        ListNode *temp1 = list1;
        ListNode *temp2 = list2;
        while (temp1 && temp2) {
            if (temp2 && temp1->val <= temp2->val) {
                ListNode* temp = new ListNode(temp1->val);
                dummy->next = temp;
                dummy = temp;
                temp1 = temp1->next;
            }

            if (temp1 && temp2->val < temp1->val) {
                ListNode* temp = new ListNode(temp2->val);
                dummy->next = temp;
                dummy = temp;
                temp2 = temp2->next;
            }
        }

        while (temp1) {
            ListNode* temp = new ListNode(temp1->val);
            dummy->next = temp;
            dummy = temp;
            temp1 = temp1->next;
        }

        while (temp2) {
            ListNode* temp = new ListNode(temp2->val);
            dummy->next = temp;
            dummy = temp;
            temp2 = temp2->next;
        }

        return newHead->next;
    }
};