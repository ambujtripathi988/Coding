
// https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1

class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
        
        // Your code here
        
        vector <int> vec;

        int max=n-1;

        int min=0;

        for(int i=0;i<n;i++)
        {
            if(i%2==0)
                vec.push_back(arr[max--]);

            else
                vec.push_back(arr[min++]);
        }

        for(int i=0;i<n;i++)
            arr[i]=vec[i];
    }
};
