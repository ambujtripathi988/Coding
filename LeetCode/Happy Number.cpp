
// https://leetcode.com/problems/happy-number/description/

class Solution {
public:
    bool isHappy(int n) 
    {
        while(n)
        {
            n = sqdigi(n) ;

            if(n == 1)
                return true ;

            else if(n % 10 == 5)
                return false ;
        }

        return false ;
    }

    int sqdigi(int n)
    {
        int sum = 0 ;

        while(n)
        {
            sum += (int)(pow(n % 10 ,2)) ;

            n /= 10 ;
        }

        return sum ;
    }
};
