
// https://practice.geeksforgeeks.org/problems/bubble-sort/1

//User function Template for C++

class Solution
{
    public:
    
    void solve(int *arr , int n)
    {
        // base case 
        if(n <= 1)
            return ;
            
        // solving one case
        for(int i = 0 ; i < n-1 ; i++)
            if(arr[i] > arr[i+1])
                swap(arr[i] , arr[i+1]) ;
              
        // recursive call  
        solve(arr , n-1) ;
    }
    
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        solve(arr , n) ; 
    }
};
