
// https://practice.geeksforgeeks.org/problems/subset-sums2234/1

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

    void subset(int ind , int sum , vector<int>& arr , int N , vector<int>& subSum) 
    {
        if(ind == N)
        {
            subSum.push_back(sum) ;
            return ;
        }
        
        // pick condition :
        
        subset(ind + 1 , sum + arr[ind] , arr , N , subSum) ;
        
        // not pick condition : 
        
        subset(ind + 1 , sum , arr , N , subSum) ;
        
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> subSum ;
        
        subset(0 , 0 , arr , N , subSum) ;
        
        sort(subSum.begin() , subSum.end()) ;
        
        return subSum ;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
