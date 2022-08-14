
// https://leetcode.com/problems/strong-password-checker-ii/

class Solution {
public:
    bool strongPasswordCheckerII(string password) 
    {   
        if(password.length() < 8)
        {
            return false ;
        }
        
        int low = 0 , up = 0 , digit = 0 , spe = 0  ;
        
        string special_char = "!@#$%^&*()-+" ; 
        
        for(int i = 0 ; i < password.length() ; i++)
        {
            
            if( password[i] >= 'a' && password[i] <= 'z' )
            {
                low = 1 ;
            }

            else if(password[i] >= 'A' && password[i] <= 'Z')
            {
                up = 1 ;
            }

            else if(isdigit(password[i]))
            {
                digit = 1 ;
            }
            
            else
            {
                for(auto j : special_char)
                {
                    if(j == password[i])
                    {
                        spe = 1 ;
                    }
                }
            }
        }
        
        int count = 0 ;
        
        for(int i = 0 ; i < password.size() - 1 ; i++)
        {
            if(password[i] == password[i+1])
            {
                count = 1 ;
            }
        }
        
        if(count)
        {
            return false ;
        }
        
        if(low == 1 && up == 1 && digit == 1 && spe == 1)
        {
            return true ;
        }
        
        else
        {
            return false ;
        }
    }
};
