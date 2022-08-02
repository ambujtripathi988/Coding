
// https://leetcode.com/problems/richest-customer-wealth/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& account) 
    {
        vector<int> money ; 
        
        for(int i = 0 ; i < account.size() ; i++)
        {
            int sum = 0 ; 
            
            for(int k = 0 ; k < account[i].size() ; k++)
            {
                sum += account[i][k] ;
            }
            
            money.push_back(sum) ;
        }
        
        int maxi = *max_element(money.begin() , money.end()) ;  // complexity : O(n)
        
        return maxi ;
    }
};
