
// https://leetcode.com/problems/reverse-nodes-in-k-group/description/

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
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        vector<int> arr ;

        ListNode* curr = head ;

        while(curr)         // storing values in an array
        {
            arr.push_back(curr -> val) ;
            curr = curr -> next ;
        }    

        if(k == arr.size())    // revesing all elements of array
            reverse(arr.begin(),arr.end()) ;

        else
        {    
            for(int i = 0 ; i <= arr.size()-k ; i += k)
            {
                int l = i , r = i+k-1 ;

                while(l < r)    // swapping
                {
                    swap(arr[l],arr[r]) ;
                    l++ ;
                    r-- ;
                }
            }

        }

        ListNode* res = new ListNode() ;    // creating new List

        curr = res ;

        // Copying values of array in new List
        for(int i = 0 ; i < arr.size() ; i++)
        {
            curr -> next = new ListNode(arr[i]) ;
            curr = curr -> next ;
        } 

        return res -> next ;
    }
};
