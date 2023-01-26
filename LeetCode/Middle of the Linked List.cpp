
// https://leetcode.com/problems/middle-of-the-linked-list/description/

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
    ListNode* middleNode(ListNode* head) 
    {
        int len = 0 ; 

        ListNode *cur = head ;

        while(cur)              // it can also be done using slow and fast pointers
        {
            cur = cur -> next ;
            len++ ;
        }    

        len = (len / 2) + 1 ; 

        cur = head ;

        for(int i = 0 ; i < len - 1 ; i++)
            cur = cur -> next ;

        return cur ;
    }
};
