
// https://leetcode.com/problems/merge-strings-alternately/description/

class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        queue<char> q1 ;
        queue<char> q2 ;

        for(int i = 0 ; i < word1.length() ; i++)
            q1.push(word1[i]) ;

        for(int i = 0 ; i < word2.length() ; i++)
            q2.push(word2[i]) ;

        string str = "" ;

        while(q1.size() || q2.size())
        {
            if(q1.size())
            {
                str.push_back(q1.front()) ;
                q1.pop() ;
            }

            if(q2.size())
            {
                str.push_back(q2.front()) ;
                q2.pop() ;
            }
        }

        return str ;
    }
};
