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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) return head;

        ListNode *curr = head;
        ListNode *nextNode = head->next;
        head->next = nullptr;
        while(nextNode != nullptr)
        {
            ListNode *tempNode = nextNode;
            nextNode = nextNode->next;
            tempNode->next = curr;
            curr = tempNode;
        }
        head = curr;
        return head;
    }
};