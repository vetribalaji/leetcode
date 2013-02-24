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
    ListNode *deleteDuplicates(ListNode *head) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(head==NULL)
        return head;
        ListNode *pre=head;
        ListNode *cur=head->next;
        while(cur!=NULL)
        {
            if(pre->val==cur->val)
            {
                pre->next=cur->next;
                delete cur;
                cur=pre->next;
            }
            else
            {
                pre=cur;
                cur=cur->next;
            }
        }
        return head;
    }
};
