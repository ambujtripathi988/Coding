
// https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int n)
    {
        if(n < k)
            return 0 ; 
            
        long sum = 0 , maxi = -1 ;
        
        for(int i = 0 ; i < k ; i++)
            sum += arr[i] ;
            
        maxi = sum ;
            
        for(int i = k ; i < n ; i++)
        {
            sum += arr[i] - arr[i - k];

            maxi = max(maxi, sum);
        }
        
        return maxi ;
    }
};
