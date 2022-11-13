
// https://leetcode.com/problems/maximum-matching-of-players-with-trainers/

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) 
    {
        sort(players.begin() , players.end()) ;
        sort(trainers.begin() , trainers.end()) ;
        
        int ans = 0 , i = 0 ;
        
        for(auto iter : players)
        {
            while(i < trainers.size()) 
            {
                if(iter <= trainers[i])
                {
                    ans ++ ;
                    i++ ;
                    break ;
                }
                
                else
                    i++ ;
            }
        }
        
        return ans ;
    }
};
