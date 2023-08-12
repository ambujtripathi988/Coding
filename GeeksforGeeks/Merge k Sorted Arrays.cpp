
// https://practice.geeksforgeeks.org/problems/merge-k-sorted-arrays/1

class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        vector<int> ans ;
        
        for(int i = 0 ; i < k ; i++)
            for(int j = 0 ; j < arr[i].size() ; j++)
                ans.push_back(arr[i][j]) ;
                
        sort(ans.begin(),ans.end()) ;
        
        return ans ;
    }
};
