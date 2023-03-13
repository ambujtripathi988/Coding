
// https://leetcode.com/problems/insertion-sort-list/description/

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
    ListNode* insertionSortList(ListNode* head) 
    {
        if(head == NULL || head -> next == NULL)
            return head ;

        ListNode *curr = head ;
        vector<int> vect ;

        while(curr)
        {
            vect.push_back(curr -> val) ;
            curr = curr -> next ;
        }

        sort(vect.begin() , vect.end()) ;

        curr = head ;

        int i = 0 ;

        while(head)
        {
            head -> val = vect[i++] ;

            head = head -> next ;
        }

        return curr ;    
    }
};
