// https://leetcode.com/problems/add-two-numbers/description/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carryover = 0;
        int sum = 0;

        ListNode* ans = nullptr;
        ListNode* temp = nullptr;

        while (l1 != nullptr && l2 != nullptr)
        {
            sum = l1->val + l2->val + carryover;
            carryover = sum / 10;
            if (ans == nullptr)
            {
                ans = new ListNode(sum % 10);
                temp = ans;
            }
            else
            {
                temp->next = new ListNode(sum % 10);  
                temp = temp->next;
            }
            l1 = l1->next;
            l2 = l2->next;
        }

        while (l1 != nullptr )
        {
            sum = l1->val + carryover;
            carryover = sum / 10;
            temp->next = new ListNode(sum % 10);  
            temp = temp->next;
            l1 = l1->next;
        }
        
        while (l2 != nullptr)
        {
            sum = l2->val + carryover;
            carryover = sum / 10;
            temp->next = new ListNode(sum % 10);  
            temp = temp->next;
            l2 = l2->next;
        }

        if (carryover)
        {
            temp->next = new ListNode(carryover); 
        }

        return ans;

    }
};
