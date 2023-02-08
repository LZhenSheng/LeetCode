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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length=0;
        ListNode* p=head;
        while(p)
        {
            p=p->next;
            length++;
        }
        p=head;
        if(n==length)
        {
            return head->next;
        }
        for(int i=0;i<length-n-1;i++)
        {
            p=p->next;
        }
        p->next=p->next->next;
        return head;
    }
};
