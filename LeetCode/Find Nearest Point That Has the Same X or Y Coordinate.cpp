
// https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/

class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) 
    {
        int dist = INT_MAX ;
        int inde = -1 ;
        
        for(int i = 0 ; i < points.size() ; i++)
        {
            vector<int> p = points[i] ;
            
            if(p[0] == x || p[1] == y)
            {    
                int d = abs(p[0] - x) + abs(p[1] - y) ;

                if(d < dist)
                {
                    inde = i ;
                    dist = d ;
                }
            }
        }
        
        if(points.size() == 1 && (points[0][0] == x || points[0][1] == y))
            return 0 ;
        
        else 
            return inde ;
    }
};
