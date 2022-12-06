
// https://leetcode.com/problems/find-smallest-letter-greater-than-target/

// Method 2 : Binary Search O(log(N))
 
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        int start = 0 , end = letters.size() ;
        
        while(start < end)
        {
            int mid = start + (end-start)/2 ;
            
            if(target >= letters[mid])
                start = mid + 1 ;
            
            else
                end = mid ;
        }
        
        return letters[start % letters.size()] ;
    }
};
