
// https://leetcode.com/problems/fair-candy-swap/

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& alicesizes, vector<int>& bobsizes) 
    {
        vector<int> vect ;
        
        int sum1 = 0 , sum2 = 0 , diff ;
        
        set<int> s ;
        
        for(int i = 0 ; i < bobsizes.size() ; i++)
        {
            sum2 += bobsizes[i] ;
            
            s.insert(bobsizes[i]) ;             // repetition of element is not allowed in set STL
        }
        
        for(int i = 0 ; i < alicesizes.size() ; i++)
        {
            sum1 += alicesizes[i] ;
        }
        
        diff = (sum2 - sum1) / 2 ;
        
        for(int i = 0 ; i < alicesizes.size() ; i++)
        {
            set<int> :: iterator iter ;             // creating an iterator of set 
            
            iter = s.find(alicesizes[i] + diff) ;   // set STL find() function have time complexity of O(1) 
            
            if(iter != s.end())             // if the element is not present in the set STL find() function return an iterator of s.end()
            {
                vect.push_back(alicesizes[i]) ;
                
                vect.push_back(alicesizes[i] + diff) ;
                
                return vect ;
            }
        }
        
        return vect ;           // function should return some value
        
    }
};
