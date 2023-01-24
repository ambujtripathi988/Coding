
// https://leetcode.com/problems/linked-list-cycle-ii/description/

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
    ListNode *detectCycle(ListNode *head) 
    {
        if(head == NULL || head -> next == NULL)
            return NULL ;

        ListNode* slow = head ;
        ListNode* fast = head ;
        ListNode* start = head ;

        while(fast && fast -> next)
        {
            slow = slow -> next ;
            fast = fast -> next ;
            fast = fast -> next ;

            if(slow == fast)
            {
                while(slow != start)        // going to the tail of where cycle starts
                {
                    slow = slow -> next ;
                    start = start -> next ;
                }

                return slow ; 
            }
        }

        return NULL ;     
    }
};
