
// https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&category[]=Arrays&curated[]=8&sortBy=difficulty

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) 
    {
        sort(array.begin() , array.end()) ;
        
        for(int i = 0 , num = 1 ; i < n ; i++ , num++)
            if(array[i] != num)
                return num ;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends
