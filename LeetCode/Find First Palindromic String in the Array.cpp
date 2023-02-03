
// https://leetcode.com/problems/find-first-palindromic-string-in-the-array/description/

class Solution {
public:
    string firstPalindrome(vector<string>& words) 
    {
        if(!words.size())
            return "" ;

        for(int i = 0 ; i < words.size() ; i++)
            if(palin(words[i]))
                return words[i] ;

        return "" ;
    }

    bool palin(string str)
    {
        int left = 0 , right = str.length() - 1 ;

        while(left < right)
        {
            if(str[left] != str[right])
                return false ;

            left ++ ;
            right -- ;
        }

        return true ;
    }
};
