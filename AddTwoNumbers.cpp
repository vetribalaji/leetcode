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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int c=0;
        ListNode *res=NULL;
        ListNode *tail=NULL;
        while(l1!=NULL || l2!=NULL || c!=0)
        {
            int s=c;
            if(l1!=NULL)
            {
                s+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                s+=l2->val;
                l2=l2->next;
            }
            //if(s>0)
            {
                c=s/10;
                ListNode *node=new ListNode(s%10);
                if(res==NULL)
                {
                    res=node;
                    tail=node;
                }
                else
                {
                    tail->next=node;
                    tail=tail->next;
                }
            }
        }
        return res;
    }
};
