
// https://leetcode.com/problems/count-common-words-with-one-occurrence/

class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) 
    {
        map<string,int> rep1 ;
        map<string,int> rep2 ;

        for(int i = 0 ; i < words1.size() ; i++)
            rep1[words1[i]] = rep1[words1[i]] + 1 ;

        for(int i = 0 ; i < words2.size() ; i++)
            rep2[words2[i]] = rep2[words2[i]] + 1 ;

        vector<string> v1 ;
        vector<string> v2 ;
        vector<string> vf ;

        for(auto iter = rep1.begin() ; iter != rep1.end() ; iter++)
            if(iter -> second == 1)
                v1.push_back(iter -> first) ;

        for(auto iter = rep2.begin() ; iter != rep2.end() ; iter++)
            if(iter -> second == 1)
                v2.push_back(iter -> first) ;

        int count = 0 ;

        for(int i = 0 ; i < v1.size() ; i++)
        {
            count = 0 ;

            for(int j = 0 ; j < v2.size() ; j++)
            {
                if(v1[i] == v2[j])
                    count ++ ;
            }

            if(count == 1)
                vf.push_back(v1[i]) ;
        }

        return vf.size() ;
    }
};
