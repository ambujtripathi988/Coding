
// https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/

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
    ListNode* deleteMiddle(ListNode* head) 
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
            if(i != arr.size()/2)
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
