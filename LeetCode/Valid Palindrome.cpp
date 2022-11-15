
// https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) 
    {
        string str = "" ;
        
        for(int i = 0 ; i < s.length() ; i++)
            if(isalpha(s[i]) || isdigit(s[i]))
                str.push_back(tolower(s[i])) ;
        
        int n = str.length() ;
        
        if(!n)
            return true ;
        
        cout << str ;
        
        int l = 0 , r = n - 1 ;
        
        bool flag = false ;
        
        while(l < r)
        {
            if(str[l] != str[r])
            {
                flag = true ;
                l++ ;
                r-- ;
                break ;
            }
            
            l++ ; r-- ;
        }
        
        if(flag)
            return false ;
        
        else
            return true ;
    }
};
