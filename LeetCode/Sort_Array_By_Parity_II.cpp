
// https://leetcode.com/problems/sort-array-by-parity-ii/

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) 
    {
        int sizee = nums.size() ;
        
        vector<int> odd ;
        vector<int> even ;
         
        for(int i = 0 ; i < sizee ; i++)
        {
            if(nums[i] % 2 == 0)
            {
                even.push_back(nums[i]) ;
            }
            
            else
                odd.push_back(nums[i]) ;
        }

        int e = 0 , o = 0 ;

        nums.clear() ;

        for(int i = 0 ; i < sizee ; i++)
        {
            if(i % 2 == 0)
            {
                nums.push_back(even[e]) ;

                e ++ ;
            }

            else
            {
                nums.push_back(odd[o]) ;

                o ++ ;
            }
        }

        return nums ;
    }
};
