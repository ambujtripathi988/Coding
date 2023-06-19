
// https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/description/

class Solution {
public:
    int minimumRounds(vector<int>& tasks) 
    {
        map<int,int> rep ;    

        for(int i = 0 ; i < tasks.size() ; i++)
            rep[tasks[i]] ++ ;

        int count = 0 ;

        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
        {
            if(iter -> second < 2)
                return -1 ;
                
            if(iter -> second < 3)
                count ++ ;

            else
                count += (iter -> second / 3)  ;

            if(iter -> second % 3 && iter -> second > 3)
                count ++ ;
        }

        return count ;
    }
};
