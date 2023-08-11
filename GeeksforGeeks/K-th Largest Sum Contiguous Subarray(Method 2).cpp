
// https://practice.geeksforgeeks.org/problems/k-th-largest-sum-contiguous-subarray/1

// Method 2 : Space Complexity : O(K)

class Solution{
public:
    int kthLargest(vector<int> &arr,int n,int k)
    {
        priority_queue<int , vector<int> , greater<int> > mini ;   // minHeap
        
        for(int i = 0 ; i < n ; i++)
        {
            int sum = 0 ;
            
            for(int j = i ; j < n ; j++)
            {
                sum += arr[j] ;
                
                if(mini.size() < k)
                    mini.push(sum) ;
                    
                else
                {
                    if(mini.top() < sum)
                    {
                        mini.pop() ;
                        mini.push(sum) ;
                    }
                }
            }
        }
        
        return mini.top() ;
    }
};
