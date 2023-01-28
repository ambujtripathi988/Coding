
// https://leetcode.com/problems/palindrome-linked-list/description/

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
    bool isPalindrome(ListNode* head) 
    {
        if(head == NULL || head -> next == NULL)
            return true ;
        
        vector<int> arr ;

        ListNode * curr = head ;

        while(curr)    
        {
            arr.push_back(curr -> val) ;
            curr = curr -> next ;
        }

        return palin(arr) ;
    }

    bool palin(vector<int> & arr)
    {
        int left = 0 , right = arr.size() - 1 ;

        while(left < right)
        {
            if(arr[left] == arr[right])
            {
                left ++ ;
                right -- ;
                continue ;
            }

            else
                return false ;
        }

        return true ;
    }
};
