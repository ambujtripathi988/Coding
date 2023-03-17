
// https://leetcode.com/problems/rotate-list/description/

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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        vector<int> arr ;

        ListNode *curr = head ; 

        while(curr)
        {
            arr.push_back(curr -> val) ;

            curr = curr -> next ;
        }

        rotate(arr , k) ;

        ListNode *res = new ListNode() ;

        curr = res ;

        for(int i = 0 ; i < arr.size() ; i++)
        {
            curr -> next = new ListNode(arr[i]) ;
            curr = curr -> next ;
        }

        return res -> next ;
    }

    void rotate(vector<int>& nums, int k) 
    {
        vector<int> vect ;
        
        int n = nums.size() ;
        
        for(int i = 0 ; i < n ; i++)
            vect.push_back(nums[i]) ;
        
        for(int i = 0 ; i < n ; i++)
            nums[(i+k) % n] = vect[i] ;
    }
};
