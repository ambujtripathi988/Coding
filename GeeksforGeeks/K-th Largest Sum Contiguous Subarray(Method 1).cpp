
// https://practice.geeksforgeeks.org/problems/k-th-largest-sum-contiguous-subarray/1

// Method 1 : Space Complexity : O(NxN)

class Solution{
public:
    int kthLargest(vector<int> &arr,int n,int k)
    {
        vector<int> sumStore ;
        
        for(int i = 0 ; i < n ; i++)
        {
            int sum = 0 ;
            
            for(int j = i ; j < n ; j++)
            {
                sum += arr[j] ;
                sumStore.push_back(sum) ;
            }
        }
        
        sort(sumStore.begin(),sumStore.end()) ;
        
        return sumStore[sumStore.size()-k] ;
    }
};
