
// https://leetcode.com/problems/check-if-number-has-equal-digit-count-and-digit-value/

class Solution { 
public:
    bool digitCount(string num) 
    {
        map<int,int> rep ;
        
        for(int i = 0 ; i < num.length() ; i++)
        {
            int x = int(num[i]) - 48 ;              // ascii values
            rep[x] = rep[x] + 1 ;
        }
        
        bool flag = false ;
        
        for(int i = 0 ; i < num.length() ; i++)
        {
            if(rep[i] != num[i] - '0')
            {
                flag = true ;
                break ;
            }
        }
        
        if(flag)
            return false ;
        
        else 
            return true ;
    }
};
