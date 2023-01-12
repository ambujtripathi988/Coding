
// https://leetcode.com/problems/count-primes/

class Solution {
public:
    int countPrimes(int n) 
    {
        int count = 0 ;
        
        vector<bool> visit(n,0) ; 
        
        for(int i = 2 ; i < n ; i++)
        {
            if(visit[i])
                continue ;
            
            count++ ;
            
            for(int j = i + i ; j < n ; j += i)         // marking all multiples as visited
                visit[j] = true ;
        }
        
        return count ;
    }
};
