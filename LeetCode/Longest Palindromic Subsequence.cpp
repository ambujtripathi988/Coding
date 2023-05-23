
// https://leetcode.com/problems/longest-palindromic-subsequence/description/

class Solution {
public:
    // space optimization
    int spaceOpti(string &a , string &b)
    {
        int n = a.length() , m = b.length() ;

        vector<int> curr (m+1,0) ;
        vector<int> next (m+1,0) ;

        for(int i = n-1 ; i >= 0 ; i--)
        {
            for(int j = m -1 ; j >=0 ; j--)
            {
                int ans = 0 ;

                if(a[i] == b[j])
                    ans = 1 + next[j+1] ;

                else
                {
                    ans = max( next[j] , curr[j+1] ) ;
                }

                curr[j] = ans ;    
            }

            next = curr ;
        }

        return next[0] ;
    }

    int longestPalindromeSubseq(string s)   // consider longest common subsequence (leetcode)
    {
        string rev = s ;

        reverse(rev.begin(),rev.end()) ;

        return spaceOpti(s , rev) ;
    }
};
