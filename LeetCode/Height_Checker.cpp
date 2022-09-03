
// https://leetcode.com/problems/height-checker/

class Solution {
public:
    int heightChecker(vector<int>& heights)  
    {
        vector<int> vect  ;
        
        int count = 0 ;
        
        for(int i = 0 ; i < heights.size() ; i++)
            vect.push_back(heights[i]) ;
        
        sort(vect.begin() , vect.end()) ;           // time complexity : N log(N)
        
        for(int i = 0 ; i < vect.size() ; i++)
            if(vect[i] != heights[i])
                count ++ ;
        
        return count ;
    }
};
