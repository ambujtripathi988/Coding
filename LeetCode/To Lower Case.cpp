
// https://leetcode.com/problems/to-lower-case/

class Solution {
public:
    string toLowerCase(string s) 
    {
        if(s.length() == 0)
            return "" ;
        
        for(int i = 0; i < s.length() ; i++)
            if(isupper(s[i]))
                s[i] = char(int(s[i]) + 32 ) ;              // converting into lowercase using ASCII value
        
        return s ;
    }
};
