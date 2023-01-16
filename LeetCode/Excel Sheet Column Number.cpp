
// https://leetcode.com/problems/excel-sheet-column-number/

class Solution {
public:
    int titleToNumber(string columnTitle) 
    {
        int col = 0 ; 
        
        for(int i = 0 ; i < columnTitle.length() ; i++)
            col = col * 26 + ( (columnTitle[i] - 'A') + 1) ;  
        
        return col ;
    }
};
