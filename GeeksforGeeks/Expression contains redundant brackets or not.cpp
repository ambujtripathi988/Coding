
// https://practice.geeksforgeeks.org/problems/e015cb4d3f354b035d9665e7c8a54a7aefb1901b/1

class Solution {
  public:
    int checkRedundancy(string str) 
    {
        // code here
        
        stack<char> s ;
        
        for(int i = 0 ; i < str.length() ; i++)
        {
            char ch = str[i] ;
            
            if(ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '*')
                s.push(ch) ;
                
            else
            {
                if(ch == ')')
                {
                    int isRedun = 1 ;
                    
                    while(s.top() != '(')
                    {
                        char c = s.top() ;
                        
                        if(c == '+' || c == '-' || c == '/' || c == '*')
                            isRedun = 0 ;
                            
                        s.pop() ;
                    }
                    
                    if(isRedun)
                        return 1 ;
                        
                    s.pop() ;
                }
            }
        }
        
        return 0 ;
    }
};
