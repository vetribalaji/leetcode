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
    ListNode *swapPairs(ListNode *head) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        ListNode *cur, *next;
        if(head==NULL)
        return head;
        cur=head;
        
        while(cur!=NULL)
        {
            next=cur->next;
            if(next!=NULL)
            {
                swap(cur->val, next->val);
                cur=next->next;
            }
            else
            break;
        }
        return head;
    }
};
