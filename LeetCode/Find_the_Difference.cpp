
// https://leetcode.com/problems/find-the-difference/ 

class Solution {
public:
    char findTheDifference(string s, string t) {
        
        sort(s.begin(),s.end()) ;

        sort(t.begin(),t.end()) ;
        
        char ch ;
        
        for(int i = 0 ; i < t.size() ; i++)
        {
            if(s[i] != t[i])
            {
                ch = t[i] ;
                
                break ;
            }
        }
        
        return ch ;
        
    }
};
