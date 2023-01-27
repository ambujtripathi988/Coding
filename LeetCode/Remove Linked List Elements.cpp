
// https://leetcode.com/problems/remove-linked-list-elements/description/

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
    ListNode* removeElements(ListNode* head, int vale) 
    {
        if(head == NULL)
            return head ;

        ListNode *curr = head ;

        while(curr -> next)
        {
            if(curr -> next -> val == vale)
                curr -> next = curr -> next -> next ;

            else
                curr = curr -> next ;
        }

        if(head -> val == vale)
            head = head -> next ;

        return head ;
    }
};
