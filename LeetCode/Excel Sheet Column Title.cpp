
// https://leetcode.com/problems/excel-sheet-column-title/

class Solution {
public:
    string convertToTitle(int col) 
    {
        string alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
        string str = "" ;
        
        while(col > 0)
        {
            col -- ;
            
            int k = col % 26 ;
            
            str.push_back(alp[k]) ;
            
            col /= 26 ;
        }
        
        reverse(str.begin() , str.end()) ;
        
        return str ;
    }
};
