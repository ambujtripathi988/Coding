
// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/

class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int n = haystack.length() , m = needle.length() ;

        for(int i = 0 ; i <= n - m ; i++)
        {
            string s = haystack.substr(i,m) ;

            // cout << s << " " ;

            bool flag = eqstr(s,needle) ;

            if(flag)
                return i ;
        }
            
        return -1 ;
    }

    // checking if two strings are equal 

    bool eqstr(string str1,string str2)
    {
        if(str1.length() != str2.length())
            return false ;

        for(int i = 0 ; i < str1.length() ; i++)
            if(str1[i] != str2[i])
                return false ;

        return true ;
    }
};