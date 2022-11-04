
// https://leetcode.com/problems/sign-of-the-product-of-an-array/

class Solution {
public:
    int arraySign(vector<int>& nums) 
    {
        int nega = 0 , zero = 0 ;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] == 0)
            {
                zero = 1 ;
                break ;
            }

            else if(nums[i] < 0)
                nega ++ ;
        }     

        if(zero)
            return 0 ;

        else if(nega % 2 == 0)
            return 1 ;

        else
            return -1 ;
    }
};
