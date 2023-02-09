
// https://leetcode.com/problems/circular-sentence/description/

class Solution {
public:
    bool isCircularSentence(string str) 
    {
        for(int i = 1 ; i < str.length() ; i++)
            if(str[i] == ' ')    
                if(str[i-1] != str[i+1])
                    return false ;

        if(str[0] == str[str.length()-1])
            return true ;

        return false ;
    }
};
