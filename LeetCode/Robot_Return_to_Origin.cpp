
// https://leetcode.com/problems/robot-return-to-origin/

class Solution {
public:
    bool judgeCircle(string moves) 
    {
        int x = 0 , y = 0 ;
        
        for(int i = 0 ; i < moves.length() ; i++)
        {
            if(moves[i] == 'R')
                x++ ;
            
            else if(moves[i] == 'L')
                x-- ;
            
            else if(moves[i] == 'U')
                y++ ;
            
            else
                y-- ;
        }
        
        if(!x && !y)
            return true ;
        
        else
            return false ;
    }
};
