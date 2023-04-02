
// https://leetcode.com/problems/reorder-list/description/

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
    void reorderList(ListNode* head) 
    {
        vector<int> arr ;

        ListNode* curr = head ;

        while(curr)
        {
            arr.push_back(curr -> val) ;
            curr = curr -> next ;
        }    

        curr = head ;

        int l = 0 , r = arr.size() -1 ;
        
        while(l <= r)
        {
            curr -> val = arr[l] ;
            curr = curr -> next ;
            l++ ;

            if (!curr)          // if current points to NULL then there is no need to store values in it
                break ;

            curr -> val = arr[r] ;
            curr = curr -> next ;
            r-- ;
        }

        return ;
    }
};
