
// https://practice.geeksforgeeks.org/problems/sum-of-array2326/1

//User function template for C++
class Solution{
public:
    // function to return sum of elements
    // in an array of size n
    
    int solve(int arr[] , int n)
    {
        if(n == 0)
            return 0 ;
            
        return arr[n-1] + solve(arr , n-1) ;
    }
    
    int sum(int arr[], int n) 
    {
        return solve(arr , n) ;
    }
};
