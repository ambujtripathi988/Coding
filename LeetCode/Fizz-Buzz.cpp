
// https://leetcode.com/problems/fizz-buzz/

class Solution {
public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string> ans ;
        
        for(int i = 1 ; i <= n ; i++)
        {
            if(i % 3 == 0 && i % 5 == 0)
            {
                ans.push_back("FizzBuzz") ;
            }
            
            else if (i % 3 == 0) 
            {
                ans.push_back("Fizz") ;
            }
            
            else if (i % 5 == 0)
            {
                ans.push_back("Buzz") ;
            }
            
            else
            { 
                // converting integer to string
                
                ostringstream str1 ;           // declaring output string stream      
                
                str1 << i ;                    // Sending a number as a stream into output string 
                
                string st = str1.str() ;       // the str() converts number into string
                
                ans.push_back(st) ;
            }
        }
        
        return ans ;
    }
};
