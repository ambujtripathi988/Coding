
// https://leetcode.com/problems/self-dividing-numbers/description/

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> ans ;

        for(int i = left ; i <= right ; i++)
            if(isNum(i) && i % 10)
                ans.push_back(i) ;

        return ans ;     
    }

    bool isNum(int num)
    {
        int n = num;

        while(n)
        {
            if(!(n % 10) || num % (n % 10)) return false;
            n /= 10;
        }
        
        return true;
    }
};
