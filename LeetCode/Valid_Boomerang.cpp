
// https://leetcode.com/problems/valid-boomerang/

class Solution {
public:
    bool isBoomerang(vector<vector<int>>& p) 
    {
        int a=p[0][0],a1=p[0][1];
        
        int b=p[1][0],b1=p[1][1];
        
        int c=p[2][0],c1=p[2][1];
        
        
        if((b1-a1)*(c-b) == (c1-b1)*(b-a))
            return false;
        
        return true;
    }
};
