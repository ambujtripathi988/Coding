
// https://leetcode.com/problems/consecutive-characters/description/

class Solution {
public:
    int maxPower(string str) 
    {
        int count = 1 , maxi = 1 ;

        for(int i = 0 ;i < str.length()-1 ; i++)
        {
            if(str[i] == str[i+1])
                count ++ ;

            else
                count = 1 ;

            maxi = max(maxi,count) ;
        }

        return maxi ;
    }
};
