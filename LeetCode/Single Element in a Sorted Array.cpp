
// https://leetcode.com/problems/single-element-in-a-sorted-array/description/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int no ;

        for (int i = 0; i < nums.size(); i++) 
        {
            if (i == nums.size() - 1 || nums[i] != nums[i + 1]) 
            {
                no = nums[i];
                break;
            }

            i++;
        }
        
        return no;
    }
};
