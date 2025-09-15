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
    int getDecimalValue(ListNode* head) {
        int n = 0;

        while (head) {
            n <<= 1;
            n += head->val;
            head = head->next;
        }

        return n;
    }
};

// Time Complexity: O(n), size of linked list
// Space Complexity: O(1)