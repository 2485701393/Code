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
        if(head)
        {
            ListNode* cur = head->next;
            head->next = nullptr;
            while(cur)
            {
                ListNode* temp = cur->next;
                cur->next = head;
                head = cur;
                cur = temp;
            }
            return head;
        }
        else 
        return nullptr;
        
    }
};
