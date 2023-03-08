
// https://leetcode.com/problems/flip-string-to-monotone-increasing/description/

class Solution {
public:
    int minFlipsMonoIncr(string s) 
    {
        int one = 0 , zero = 0 ; 

        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == '1')
                one ++ ;

            else
                zero ++ ;

            zero = min(one,zero) ;
        }

        return zero ;
    }   
};
