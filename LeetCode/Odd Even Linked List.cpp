
// https://leetcode.com/problems/odd-even-linked-list/description/

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
    ListNode* oddEvenList(ListNode* head)
    {
        if(head == NULL || head -> next == NULL)
            return head ;

        ListNode* curr = head ;

        vector<int> even ;
        vector<int> odd ;

        int k = 1 ;

        while(curr)
        {
            if(k % 2)
                odd.push_back(curr->val) ;            

            else
                even.push_back(curr->val) ;

            k ++ ;

            curr = curr -> next ;
        }

        for(int i = 0 ; i < even.size() ; i++)
            odd.push_back(even[i]) ;

        ListNode* res = new ListNode() ;

        curr = res ;

        for(int i = 0 ; i < odd.size() ; i++)
        {
            curr -> next = new ListNode(odd[i]) ;

            curr = curr -> next ;
        }

        return res -> next ;
    }
};
