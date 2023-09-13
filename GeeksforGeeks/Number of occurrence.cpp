
// https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1

//User function template for C++

int firstOcc(int nums[], int n, int target)
{
    int s = 0 , e = n-1 ;

    int mid = s + (e-s)/2 ;

    int ans = -1 ;

    while(s <= e)
    {
        if(nums[mid] == target)
        {
            ans = mid ;
            e = mid -1 ;
        }

        else if(nums[mid] > target)
            e = mid -1 ;

        else if(nums[mid] < target)
            s = mid+1 ;

        mid = s + (e-s)/2 ;
    }

    return ans ;
}

int lastOcc(int nums[], int n, int target)
{
    int s = 0 , e = n-1 ;

    int mid = s + (e-s)/2 ;

    int ans = -1 ;

    while(s <= e)
    {
        if(nums[mid] == target)
        {
            ans = mid ;
            s = mid + 1 ;
        }

        else if(nums[mid] > target)
            e = mid -1 ;

        else if(nums[mid] < target)
            s = mid+1 ;

        mid = s + (e-s)/2 ;
    }

    return ans ;
}

class Solution{
public: 
    /* if x is present in arr[] then returns the count
        of occurrences of x, otherwise returns 0. */
    int count(int arr[], int n, int x) 
    {
        int first = firstOcc(arr , n , x) ;
        int last = lastOcc(arr , n , x) ;
        
        if(first ==-1) 
            return 0;
            
        else 
            return last-first+1;
    }
};
