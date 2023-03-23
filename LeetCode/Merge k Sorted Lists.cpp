
// https://leetcode.com/problems/merge-k-sorted-lists/description/

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
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        vector<int> arr ;

        for(int i = 0 ; i < lists.size() ; i++)
        {
            ListNode* head = lists[i] ;

            while(head)
            {
                arr.push_back(head -> val) ;
                head = head -> next ;
            }
        }

        sort(arr.begin() , arr.end()) ;

        ListNode* res = new ListNode() ;
        ListNode* curr = res ;

        for(int i = 0 ; i < arr.size() ; i++)
        {
            curr -> next = new ListNode(arr[i]) ;
            curr = curr -> next ;
        }

        return res -> next ;
    }
};
