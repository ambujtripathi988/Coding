
// https://leetcode.com/problems/peak-index-in-a-mountain-array/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int max = -1 , ind ; 

        for(int i = 0 ; i < arr.size() ; i++)
        {
            if(max < arr[i])
            {
                max = arr[i] ;

                ind = i ;
            }
        }   

        return ind ;
    }
};
