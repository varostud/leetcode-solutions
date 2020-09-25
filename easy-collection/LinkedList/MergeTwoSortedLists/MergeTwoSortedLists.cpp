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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        //sorted lists
        ListNode* fakehead = new ListNode();
        ListNode* head = fakehead;
        
        while(l1 != NULL && l2 != NULL)
        {
            if(l1->val < l2->val)
            {
                head->next = new ListNode(l1->val);
                l1 = l1->next;
            }
            else
            {
                head->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            head = head->next;
        }
        
        if(l1 == NULL)
        {
            while(l2 != NULL)
            {
                head->next = new ListNode(l2->val);
                l2 = l2->next;
                head = head->next;
            }
        }
        if(l2 == NULL)
        {
            while(l1 != NULL)
            {
                head->next = new ListNode(l1->val);
                l1 = l1->next;
                head = head->next;
            }
        }
        
        head = fakehead->next;
        delete fakehead;
        return head;
    }
};