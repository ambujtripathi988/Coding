
// https://leetcode.com/problems/valid-palindrome-ii/description/

class Solution {
public:
    bool validPalindrome(string str) 
    {
        int l = 0 , r = str.length() - 1 ;

        while(l <= r && str[l] == str[r])
        {
            l++ ; r-- ;
        }

        return (l > r) || is_palin(str.substr(l,r-l)) || is_palin(str.substr(l+1 , r-l)) ;
    }

    bool is_palin(string str)
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
