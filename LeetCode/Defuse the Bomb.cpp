
// https://leetcode.com/problems/defuse-the-bomb/description/

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) 
    {
        vector<int> ans ;

        if(k == 0)
        {
            for(int i = 0 ; i < code.size() ; i++)
                ans.push_back(0) ;

            return ans ;
        } 

        else if(k > 0)
        {
            for(int i = 0 ; i < code.size() ; i++)
            {
                int sum = 0 ; 

                for(int j = i + 1 ; j <= i+k ; j++)
                    sum += code[j%code.size()] ;

                ans.push_back(sum) ;
            }

            return ans ;
        }   

        else
        {
            for(int i = 0 ; i < code.size() ; i++)
            {
                int sum = 0 ;

                for(int j = i - 1 ; j >= i+k ; j--)
                {
                    if(j >= 0 && j < code.size())
                        sum += code[j] ;

                    else
                        sum += code[j+code.size()] ;        
                }

                ans.push_back(sum) ;
            }

            return ans ;
        }
    }
};
