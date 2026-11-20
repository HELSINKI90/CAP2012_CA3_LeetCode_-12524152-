
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 0)
            return head;

        ListNode* curr = head;
        int len = 1;

        while (curr->next != NULL) {
            curr = curr->next;
            len++;
        }

        curr->next = head;

        k = k % len;

        int steps = len - k;

        while (steps--) {
            curr = curr->next;
        }

        head = curr->next;
        curr->next = NULL;

        return head;
    }
};
