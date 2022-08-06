
// https://leetcode.com/problems/plus-one/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        long long int num = 0 ;
        
        if(digits[digits.size() - 1 ] < 9)
        {
            digits[digits.size() - 1 ] ++ ;
            
            return digits ;
        }
        
        vector<int> ans ;
        
        int n = digits.size() ;
        
        int carry = 0 ;
        
        int temp = digits[n-1] + 1 ;
        
        carry = temp / 10 ;
        
        ans.push_back(temp%10) ;
        
        for(int i = n - 2 ; i >= 0 ; i--)
        {
            temp = digits[i] + carry ;
            
            carry = temp / 10 ;
            
            ans.push_back(temp%10) ;
        }
        
        if(carry > 0)
        {
            ans.push_back(carry) ;
        }
        
        reverse(ans.begin() , ans.end()) ;
        
        return ans ;
    }
};
