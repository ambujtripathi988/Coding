
// https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times5150/1?page=1&curated[]=1&sortBy=submissions

class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int,int> rep ;
        
        for(int i = 0 ; i < n ; i++)
        {
            rep[a[i]] ++ ;
            
            if(rep[a[i]] == k)
                return a[i] ;
        }
            
        for(int i = 0 ; i < n ; i++)
            if(rep[a[i]] == k)
                return a[i] ;
                
        return -1 ;
    }
};
