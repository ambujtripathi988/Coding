
// https://leetcode.com/problems/jewels-and-stones/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        set<char> sona ; 
        
        for(int i = 0 ; i < jewels.length() ; i++)
            sona.insert(jewels[i]) ;
        
        int count = 0 ; 
        
        for(int i = 0 ; i < stones.length() ; i++)
            if(sona.find(stones[i]) != sona.end())
                count ++ ;
        
        return count ;
    }
};
