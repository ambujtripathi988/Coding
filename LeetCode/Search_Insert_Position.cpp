
// https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int searchInsert(vector<int>& arr, int target) 
    {
        int low = 0 , mid , high , inde = 0 ;
        
        high = (arr.size() - 1) ;

        while(low <= high)
        {
            mid = (high+low)/2;

            if (arr[mid] == target)
            {
                return mid ;
            }

            else if(arr[mid] < target)
            {
                low = mid + 1 ;
                
                inde = low ;
            }

            else 
            {
                high = mid - 1 ;
            }
        }    
        
        return inde ;
    }
};
