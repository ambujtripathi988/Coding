
// https://leetcode.com/problems/intersection-of-two-linked-lists/description/

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        int len1 = 0 , len2 = 0 ;

        ListNode *pa = headA , *pb = headB ;

        while(pa)
        {
            pa = pa -> next ;
            len1 ++ ;
        }

        while(pb)
        {
            pb = pb -> next ;
            len2 ++ ;
        }

        pa = headA , pb = headB ;

        if(len1 > len2)
            for(int i = 0 ; i < len1 - len2 ; i++)
                pa = pa -> next ;

        else
            for(int i = 0 ; i < len2 - len1 ; i++)
                pb = pb -> next ;

        while(pa)
        {
            if(pa == pb)
                return pa ;
            
            pa = pa -> next ;
            pb = pb -> next ;
        }

        return NULL ;
    }
};
