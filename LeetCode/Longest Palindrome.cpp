
// https://leetcode.com/problems/longest-palindrome/

class Solution {
public:
    int longestPalindrome(string s) 
    {
        if(s.length() == 1)
            return 1 ;
        
        unordered_map<char,int> rep ;
        
        for(int i = 0 ; i < s.length() ; i++)
            rep[s[i]] = rep[s[i]] + 1 ;
        
        bool odd = false ;
        
        int count = 0 ;
        
        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
        {
            if(iter -> second % 2 == 0)
                count += iter -> second ;
            
            else
            {
                count += iter -> second - 1 ;
                odd = true ;
            }
        }
        
        if(odd)
            count ++ ;
            
        return count ;
    }
};
