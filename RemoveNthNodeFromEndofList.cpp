/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(n==1 && head->next==NULL)
        {
            delete head;
            return NULL;
        }
        if(n==1)
        {
            deleteLast(head);
            return head;
        }
        
        ListNode *node1=head;
        for(int i=1;i<n;i++)
        {
            node1=node1->next;
        }
        ListNode *node2=head;
        while(node1->next!=NULL)
        {
            node1=node1->next;
            node2=node2->next;
        }
        ListNode *tmp=node2->next;
        node2->val=node2->next->val;
        node2->next=node2->next->next;
        delete tmp;
        return head;
    }
    void deleteLast(ListNode *head)
    {
        ListNode *pre,*cur;
        pre=head;
        cur=head->next;
        while(cur->next!=NULL)
        {
            pre=cur;
            cur=cur->next;
        }
        pre->next=NULL;
        delete cur;
    }
};
