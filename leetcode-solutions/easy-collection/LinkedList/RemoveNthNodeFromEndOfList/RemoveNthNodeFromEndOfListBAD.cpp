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
        //if given n will always be valid
        ListNode* temp = head;
        int size = 1;
        while(temp->next != NULL)
        {
            temp = temp->next;
            size++;
        }
        
        if(size == n)
        {
            temp = head->next;
            delete head;
            return temp;
        }
        
        temp = head;
        for(int i = 0; i < size - n - 1; i++)
        {
            temp = temp->next;
        }
        ListNode* temp2 = temp->next;
        temp->next = temp->next->next;
        delete temp2;
        
        return head;
    }
};