
// https://leetcode.com/problems/rings-and-rods/

class Solution { 
public:
    int countPoints(string rings) 
    {
        vector<string> rod ;
        
        for(int i = 0 ; i < 10 ; i++)
            rod.push_back("") ;
        
        for(int i = 0 ; i < rings.length() - 1 ; i += 2)
        {
            int x = rings[i+1] - '0' ;
            
            rod[x].push_back(rings[i]) ;
        }
        
        int count = 0 ;
        
        for(int i = 0 ; i < 10 ; i++)
        {
            string str = rod[i] ;
            
            int r = 0 , g = 0 , b = 0 ;
            
            for(int j = 0 ; j < str.length() ; j++)
            {
                if(str[j] == 'R')
                    r = 1 ;
                
                else if(str[j] == 'G')
                    g = 1 ;
                
                else 
                    b = 1 ;
            }
            
            if(r == 1 && g == 1 && b ==1)
                count ++ ;
        }
        
        return count ;
    }
};
