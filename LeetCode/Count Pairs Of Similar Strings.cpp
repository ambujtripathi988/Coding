
// https://leetcode.com/problems/count-pairs-of-similar-strings/description/

class Solution {
public:
    int similarPairs(vector<string>& words) 
    {
        int count = 0 ;

        for(int i = 0 ; i < words.size(); i++)
        {
            set<char> set1 ;

            for(int j = 0 ; j < words[i].length() ; j++)
                set1.insert(words[i][j]) ;

            for(int j = i + 1 ; j < words.size() ; j++)
            {
                set<char> set2 ;

                for(int k = 0 ; k < words[j].length() ; k++) 
                    set2.insert(words[j][k]) ;

                if(set1 == set2)
                    count ++ ;
            }
        }

        return count ;
    }
};
