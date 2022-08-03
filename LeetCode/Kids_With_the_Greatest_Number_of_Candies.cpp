
// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        int max_candy = *max_element(candies.begin() , candies.end()) ;  // complexity : O(n)
        
        vector<bool> ans ;
        
        for(int i = 0 ; i < candies.size() ; i++)
        {
            if(candies[i] + extraCandies >= max_candy)
            {
                ans.push_back(true) ;
            }
            
            else
            {
                ans.push_back(false) ;
            }
        }
        
        return ans ;
    }
};
