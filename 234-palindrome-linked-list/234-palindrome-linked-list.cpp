class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *curr = head,*nextNode,*prev=NULL;
        int n = 0,k;
        while(curr){
            curr = curr->next;
            n++;
        }
        k = n/2;
        curr = head;
        while(k--){
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        if(n&1)
            curr = curr->next;
        while(curr){
            if(curr->val != prev->val)
                return false;
            curr = curr->next;
            prev = prev->next;
        }
        return true;
    }
};