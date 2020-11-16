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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        while(head != NULL)
        {
            ListNode* temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }
        return prev;
    }
    
    ListNode* copyList(ListNode* head) {
        ListNode* newhead = NULL;
        if(head != NULL)
        {
            newhead = new ListNode(head->val);
            head = head->next;
        }
        else return newhead;
        
        ListNode* temp = newhead;
        while(head != NULL)
        {
            temp->next = new ListNode(head->val);
            temp = temp->next;
            head = head->next;
        }
        return newhead;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* temp = copyList(head);
        temp = reverseList(temp);
        while(temp != NULL)
        {
            if(head->val != temp->val) return false;
            head = head->next;
            temp = temp->next;
        }
        return true;
    }
};