
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        vector<int> arr ;

        ListNode* curr = head ;

        while(curr)
        {
            arr.push_back(curr -> val) ;
            curr = curr -> next ;
        }    

        vector<int> vect ;

        for(int i = 0 ; i < arr.size() ; i++)
            if(i != arr.size()-n)
                vect.push_back(arr[i]) ;

        ListNode* res = new ListNode() ;

        curr = res ;

        for(int i = 0 ; i < vect.size() ; i++)
        {
            curr -> next = new ListNode(vect[i]) ;
            curr = curr -> next ;
        }

        return res -> next ;
    }
};
