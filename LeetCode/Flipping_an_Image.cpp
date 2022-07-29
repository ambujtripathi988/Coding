
// https://leetcode.com/problems/flipping-an-image/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) 
    {
        vector<int> vect_inner ;
        
        vector<vector<int>> vect_outer ;
                
        for(int i = 0 ; i < image.size() ; i++)
        {
            reverse(image[i].begin() , image[i].end()) ;       // complexity O(n)
            
            for(int j = 0 ; j < image[i].size() ; j++)
            {
                if(image[i][j] == 0)
                {
                    vect_inner.push_back(1) ;
                }

                else
                {
                    vect_inner.push_back(0) ;
                }   
            }
            
            vect_outer.push_back(vect_inner) ;
            
            vect_inner.clear() ;
        }
                
        return vect_outer ;
    }
};
