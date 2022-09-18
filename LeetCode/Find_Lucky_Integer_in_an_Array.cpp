
// https://leetcode.com/problems/find-lucky-integer-in-an-array/

class Solution { 
public:
    int findLucky(vector<int>& arr) 
    {
        map<int,int> rep ;

        for(int i = 0 ; i < arr.size() ; i++)
            rep[arr[i]] = rep[arr[i]] + 1 ;

        int flag = 0 , num ;

        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
        {   if(iter -> first == iter -> second)
            {
                num = iter -> first ;

                flag = 1 ;
            }
        } 

        if(!flag)
            return -1 ;

        else
            return num ;
    }
};
