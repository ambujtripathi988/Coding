
// https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/description/

class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) 
    {
        unordered_set<int> s ;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            int r = rev(nums[i]) ;
            s.insert(nums[i]) ;
            s.insert(r) ;
        }

        return s.size() ;
    }

    int rev(int x)
    {
        int no = 0 ;

        while(x > 0)
        {
            no = no *10 + x % 10 ;
            x /= 10 ;
        }

        return no ;
    }
};
