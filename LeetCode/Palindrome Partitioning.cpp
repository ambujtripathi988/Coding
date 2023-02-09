
// https://leetcode.com/problems/palindrome-partitioning/description/

class Solution {
public:
    vector<vector<string>> partition(string s) 
    {
        vector<vector<string>> res ;
        vector<string> path ;

        func(0,s,path,res) ;

        return res ;
    }

    bool is_palin(string str , int left , int right)
    {
        while(left < right)
        {
            if(str[left] != str[right])
                return false ;

            left ++ ;
            right -- ;
        }

        return true ;
    }

    void func(int inde , string s , vector<string> &path , vector<vector<string>> &res)
    {
        if(inde == s.size())
        {
            res.push_back(path) ;
            return ;
        }

        for(int i = inde ; i < s.size() ; i++)
        {
            if(is_palin(s , inde , i))
            {
                path.push_back( s.substr(inde , i - inde + 1 ) ) ;

                func(i+1 , s , path , res) ;

                path.pop_back() ;
            }
        }
    }
};
