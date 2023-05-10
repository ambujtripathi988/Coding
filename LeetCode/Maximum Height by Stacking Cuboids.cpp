
// https://leetcode.com/problems/maximum-height-by-stacking-cuboids/description/

class Solution {
public:

    bool check(vector<int> base , vector<int> newBox)
    {
        if(newBox[0] <= base[0] && newBox[1] <= base[1] && newBox[2] <= base[2])
            return true ;

        return false ;
    }

    // space optimization in tabulation
    int spaceOpti(int n , vector<vector<int>>& a)
    {
        vector<int> currRow(n+1,0) ;
        vector<int> nextRow(n+1,0) ;
        
        for(int curr = n-1 ; curr >= 0 ; curr--)
        {
            for(int prev = curr -1 ; prev >= -1 ; prev--)
            {
                // include condition
                int incl = 0 ;
                
                if(prev == -1 || check(a[curr],a[prev]) )
                    incl = a[curr][2] + nextRow[curr + 1] ;
                    
                // exlude condition
                int excl = 0 + nextRow[prev+1] ;
                
                currRow[prev+1] = max(incl , excl) ;
            }
            
            nextRow = currRow ;
        }
        
        return nextRow[0] ;
    }

    int maxHeight(vector<vector<int>>& cuboids) 
    {
        // step 1 : sort all dimesions for every cuboid

        for(auto &a : cuboids)
            sort(a.begin(),a.end()) ;

        // step 2 : sort all cuboids based on width or length
        sort(cuboids.begin() ,cuboids.end()) ;

        // step 3 : use Longest Increasing Subsequence gfg practice logic

        return spaceOpti(cuboids.size() , cuboids) ;
    }
};
