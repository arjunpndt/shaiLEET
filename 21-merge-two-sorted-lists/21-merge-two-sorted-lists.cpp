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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * xe=new ListNode(-1);
        ListNode *ne=xe;
        while(list1!=NULL && list2!=NULL)
        {
            if(list1->val<list2->val)
            {ne->next=list1;
                list1=list1->next;}
            else
            {ne->next=list2;
            list2=list2->next;}
            ne=ne->next;
        }
        while(list1!=NULL)
        {
            ne->next=list1;
            list1=list1->next;
            ne=ne->next;
        }
        while(list2!=NULL)
        {
            ne->next=list2;
            list2=list2->next;
            ne=ne->next;
        }
        return xe->next;
    }
};