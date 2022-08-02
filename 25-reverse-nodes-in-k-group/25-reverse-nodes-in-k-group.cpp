class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* it = head;
        
        for(int i = 0; i < k; i++)
        {
            if(!it)
                return head;
            it = it->next;
        }
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        for(int i = 0; i < k; i++)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head->next = reverseKGroup(curr, k);
        return prev;
        
    }
};