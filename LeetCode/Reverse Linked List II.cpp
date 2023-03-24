
// https://leetcode.com/problems/reverse-linked-list-ii/description/

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
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        vector<int> arr ;

        ListNode* curr = head ;

        while(curr)
        {
            arr.push_back(curr -> val) ;
            curr = curr -> next ;
        } 

        left -- ; right -- ;
        
        while(left < right)
        {
            swap(arr[left] , arr[right]) ;
            left ++ ;
            right -- ;
        }

        ListNode* res = new ListNode() ;

        curr = res ;

        for(int i = 0 ; i < arr.size() ; i++)
        {
            curr -> next = new ListNode(arr[i]) ;
            curr = curr -> next ;
        }

        return res -> next ;
    }
};
