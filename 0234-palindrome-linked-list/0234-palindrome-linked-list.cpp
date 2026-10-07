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

    ListNode* reverse(ListNode *head)
    {
        ListNode *prev = head;
        ListNode *curr = head->next;

        while(curr)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head->next = nullptr;
        return prev;
    }


    bool isPalindrome(ListNode* head) {
        if(head->next == nullptr) return true;
        ListNode dummy(0, head);
        ListNode *slow = &dummy;
        ListNode *fast = head;

        while(fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;     
        }
        ListNode *newHead = reverse(slow->next);
        ListNode *temp = head;
        ListNode *temp2 = newHead;
        while(temp2)
        {
            if(temp->val != temp2->val)
            {
                return false;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
        slow->next = reverse(newHead);
        return true;
    }
};