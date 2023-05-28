
// https://leetcode.com/problems/search-a-2d-matrix/description

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) 
    {
        for(int i = 0 ; i  < mat.size() ; i++)
            for(int j = 0 ; j < mat[0].size() ; j++)
                if(mat[i][j] == tar)
                    return true ;

        return false ;    
    }
};
