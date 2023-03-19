
// https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/

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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        vector<int> arr ;

        ListNode* curr = head ;

        while(curr)
        {
            arr.push_back(curr -> val) ;
            curr = curr -> next ;
        }  

        swap(arr[k-1],arr[arr.size()-k]) ;

        ListNode *res = new ListNode() ;

        curr = res ;

        for(int i = 0 ; i < arr.size() ; i++)
        {
            curr -> next = new ListNode(arr[i]) ;
            curr = curr -> next ;
        }

        return res -> next ;    
    }
};
