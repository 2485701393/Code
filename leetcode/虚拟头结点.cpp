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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* newhead = new ListNode();
        newhead->next = head;
        ListNode* h1 = newhead;
        ListNode* h2 = newhead->next;
        ListNode* ans = newhead;
        while (h2)
        {
            if (h2->val == val)
            {
                h1->next = h2->next;
                delete h2;
                h2 = h1->next;
            }
            else
            {
                h1 = h1->next;
                h2 = h2->next;
            }
        }
        return ans->next;
    }

};