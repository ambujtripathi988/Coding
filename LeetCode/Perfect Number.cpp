
// https://leetcode.com/problems/perfect-number/description/

class Solution {
public:
    bool checkPerfectNumber(int num) 
    {
        vector<int> div ;

        for(int i = 1 ; i <= num/2 ; i++)
            if(num % i == 0)
                div.push_back(i) ;

        int sum = 0 ;

        for(int i = 0 ; i < div.size() ; i++)
            sum += div[i] ;

        if(sum == num)
            return true ;

        return false ;    
    }
};
