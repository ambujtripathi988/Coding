
// https://leetcode.com/problems/length-of-the-longest-alphabetical-continuous-substring/

class Solution {
public:
    int longestContinuousSubstring(string str) {
        
        if(!str.length())
            return 0 ;
        
        vector<int> sub ;
        
        sub.push_back(1) ;
        
        for(int i = 1 ; i < str.length() ; i++)
        {
            if(int(str[i]) - int(str[i-1]) == 1)
                sub.back() ++ ;
            
            else
                sub.push_back(1) ;
        }
        
        return *max_element(sub.begin() , sub.end()) ;
    }
};
