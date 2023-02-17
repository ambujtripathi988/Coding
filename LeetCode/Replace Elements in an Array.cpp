
// https://leetcode.com/problems/replace-elements-in-an-array/description/

class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& oper) 
    {
        unordered_map<int,int> inde ;

        for(int i = 0 ; i < nums.size() ; i++)
            inde.insert({nums[i],i}) ;

        for(int i = 0 ; i < oper.size() ; i++)
        {
            int ind = inde[oper[i][0]] ;

            nums[ind] = oper[i][1] ; 

            inde[oper[i][1]] = ind ;
        }    

        return nums ;
    }  
};
