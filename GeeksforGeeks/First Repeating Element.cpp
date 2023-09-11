
// https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) 
    {
        unordered_map<int,int> rep ;
        
        for(int i = 0 ; i < n ; i++)
            rep[arr[i]] ++ ;
            
        for(int i = 0 ; i < n ; i++)
            if(rep[arr[i]] >= 2)
                return i+1 ;
                
        return -1 ;
    }
};
