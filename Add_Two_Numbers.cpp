class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* head = new ListNode(0);
        ListNode* temp = head;

        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry != 0) {

            int a = 0;
            int b = 0;

            if (l1 != NULL)
                a = l1->val;

            if (l2 != NULL)
                b = l2->val;

            int sum = a + b + carry;

            temp->next = new ListNode(sum % 10);

            carry = sum / 10;

            temp = temp->next;

            if (l1 != NULL)
                l1 = l1->next;

            if (l2 != NULL)
                l2 = l2->next;
        }

        return head->next;
    }
};
