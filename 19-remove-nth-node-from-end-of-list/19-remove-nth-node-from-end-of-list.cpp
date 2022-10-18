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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* h = head;
        int c = 0;
        while (h != nullptr) {
            c++;
            h = h -> next;
        }
        int i = 0;
        h = head;
        if (n == c) {
            return head -> next;
        }
        while (h != nullptr) {
            i++;
            if (c - n  == i) {
                h -> next = h -> next -> next;
            }else {
                h = h -> next;
            }
        }
        return head;
    }
};