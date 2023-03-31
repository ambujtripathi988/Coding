
// https://leetcode.com/problems/string-compression/description/

class Solution {
public:
    int compress(vector<char>& chars)
    {
        int count = 0 ;
        string str = "" ;

        for(int i = 0 ; i < chars.size() ; i++)
        {
            count ++ ;

            if(i+1 >= chars.size() || chars[i] != chars[i+1])
            {
                if(count == 1)
                {
                    str += chars[i] ;
                    count = 0 ;
                }

                else
                {
                    str += chars[i] + to_string(count) ;
                    count = 0 ;
                }
            }
        }    

        for(int i = 0 ; i < str.length() ; i++)
            chars[i] = str[i] ;

        return str.length() ;
    }
};
