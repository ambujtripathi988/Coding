
// https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/description/

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) 
    {
        int sum = 0 ;

        for(int i = 0 ; i < arr.size() ; i++)
            sum += arr[i] ;

        int s = 0 ;

        vector<int> vect ;

        for(int i = 0 ; i < arr.size() ; i++)
        {
            s += arr[i] ;

            if(s == sum / 3)
            {
                vect.push_back(s) ;
                s = 0 ;
            }
        }    

        if( vect.size() >= 3 &&  (vect[0] + vect[1] + vect[2]) == sum)
            return true ;

        return false ;
    }
};
