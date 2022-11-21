
// https://leetcode.com/problems/rotate-string/
 
class Solution {
public:
    bool rotateString(string s, string goal) 
    {
        int diff ;
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == goal[0] && s[(i+1)%s.length()] == goal[1] && s[(i+2)%s.length()] == goal[2])
            {
                diff = i ;
                break ;
            }
        }
        
        int n = goal.length() ;
        
        char arr[n] ;
        
        for(int i = 0 ; i < n ; i++)
            arr[(i+diff) % n] = goal[i] ;
        
        string str = "" ;
        
        for(int i = 0 ; i < n ; i++)
            str.push_back(arr[i]) ;
        
        if(str == s)
            return true ;
        
        else
            return false ;
    } 
};
