
// https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& sq) 
    {
        for(int i = 0 ; i < sq.size() ; i++)
        {
            int n = pow( sq[i] , 2 ) ;
            
            sq[i] = n ;
        }
        
        sort(sq.begin(),sq.end()) ;             // time complexity : N log(N)
        
        return sq ;
    }
};
