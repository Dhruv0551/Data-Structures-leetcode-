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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *t1 = l1;
        ListNode *t2 = l2;
        ListNode *dummy = new ListNode(0);
        ListNode *newHead = dummy;
        int sum = 0;
        int carry = 0;
        while(t1 && t2)
        {
            sum+=carry;
            sum += t1->val + t2->val;
            ListNode *newNode = new ListNode(sum % 10);
            dummy->next = newNode;
            dummy = newNode;
            carry = sum / 10;
            sum = 0;
            t1 = t1->next;
            t2 = t2->next;
        }


        while(t1)
        {
            sum+=carry;
            sum += t1->val;
            ListNode *newNode = new ListNode(sum % 10);
            dummy->next = newNode;
            dummy = newNode;
            carry = sum / 10;
            sum = 0;
            t1 = t1->next;
        }

        while(t2)
        {
            sum+=carry;
            sum += t2->val;
            ListNode *newNode = new ListNode(sum % 10);
            dummy->next = newNode;
            dummy = newNode;
            carry = sum / 10;
            sum = 0;
            t2 = t2->next;
        }
        while(carry)
        {
            sum+=carry;
            ListNode *newNode = new ListNode(sum % 10);
            dummy->next = newNode;
            dummy = newNode;
            carry = sum / 10;
            sum = 0;
        }

        return newHead->next;
    }
};