
// https://leetcode.com/problems/kth-largest-element-in-an-array/description/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        priority_queue<int> pq ;        // maxHeap

        for(int i = 0 ; i < nums.size() ; i++)
            pq.push(nums[i]) ;

        int n ;

        while(k--)
        {
            n = pq.top() ;
            pq.pop() ;
        }    

        return n ;
    }
};
