
// https://leetcode.com/problems/peak-index-in-a-mountain-array/

// Method 1 : O(log N)

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int s = 0 , e = arr.size() - 1 ;
        
        int mid = s + (e-s)/2 ;
        
        while(s < e)
        {
            mid = s + (e-s)/2 ;
            
            if(arr[mid] < arr[mid+1])
                s = mid + 1 ;
            
            else
                e = mid ;
        }
        
        return s ;
    }
};
