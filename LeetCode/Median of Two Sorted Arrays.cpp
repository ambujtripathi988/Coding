
// https://leetcode.com/problems/median-of-two-sorted-arrays/description/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        for(int i = 0 ; i < nums2.size() ; i++)
            nums1.push_back(nums2[i]) ;

        sort(nums1.begin(),nums1.end()) ;

        int n = nums1.size() ;

        int i = n / 2 ;

        if(n % 2 == 0)
        {
            double ans = ((nums1[i-1] + nums1[i])*1.0) / 2 ;

            return ans ;
        }

        else
        {
            double ans = nums1[i] ;
            
            return ans ;
        }
    }
};
