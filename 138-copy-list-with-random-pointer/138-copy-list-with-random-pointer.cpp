/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)
            return NULL;
        Node * cur=head;
        while(cur)
        {
            Node *tmp=new Node(cur->val);
            tmp->next=cur->next;
            cur->next=tmp;
            cur=cur->next->next; 
        }
        cur=head;
        while(cur)
        {
               cur->next->random=(cur->random)?cur->random->next:NULL;
            cur=cur->next->next;
        }
        cur=head;
        Node *res=head->next,*helper=head->next;
        while(cur && cur->next)
        {
            helper=cur->next;
            cur->next=helper->next;
            
            cur=cur->next;
            helper->next=cur?cur->next:NULL;
        }
        return res;
        
    }
};