
// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

class Solution {
public:
    int subtractProductAndSum(int n)  
    {
        int product = n , sum = n , add = 0 , multi = 1 ;
        
        vector<int> pro ;
        
        while(product > 0)
        {
            int digit = product % 10 ;
            
            product /= 10 ;
                        
            pro.push_back(digit) ;
        }
        
        for(int i = 0 ; i < pro.size() ; i++)
        {
            add += pro[i] ;
            
            multi *= pro[i] ;
        }
        
        return (multi - add) ;
    }
};
