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
    ListNode* deleteMiddle(ListNode* head) {
        int cnt = 0;
        ListNode* ans = head;
        ListNode* counter = head;
        while(counter != nullptr) {
            cnt++;
            counter = counter -> next;
        }
        int i = 0;
        while (i < cnt / 2 - 1) {
            ans = ans -> next;
            i++;
        }
        if (cnt > 1)
            ans -> next = ans -> next -> next;
        if (cnt == 1) return nullptr;
        return head;
    }
};