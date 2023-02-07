
// https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/description/

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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head == NULL || head -> next == NULL)
            return head ;

        ListNode *head2 = new ListNode(0) , *curr = head2 ;
        head2 -> next = head ;

        int temp =  0 ;

        while(curr -> next && curr -> next -> next)
        {
            if(curr -> next -> val != curr -> next -> next -> val)
                curr = curr -> next ;

            else
            {
                temp = curr -> next -> val ;

                while(curr -> next && curr -> next -> val == temp)
                    curr -> next = curr -> next -> next ;
            }
        }

        return head2 -> next ;
    } 
};
