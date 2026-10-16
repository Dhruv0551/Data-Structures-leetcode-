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
    ListNode* mergeLists(ListNode* main, ListNode* aux) {
        ListNode* h1 = main;
        ListNode* h2 = aux;
        ListNode* temp = new ListNode(0);
        ListNode* curr = temp;
        while (h1 && h2) {
            if (h1->val <= h2->val) {
                curr->next = h1;
                curr = h1;
                h1 = h1->next;
            } else {
                curr->next = h2;
                curr = h2;
                h2 = h2->next;
            }
        }

        if (h1) {
            curr->next = h1;
        }
        if (h2) {
            curr->next = h2;
        }

        return temp->next;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head = nullptr;
        for(int i = 0; i < size(lists); i++)
        {
            head = mergeLists(head, lists[i]);
        }

        return head;
        
    }
};