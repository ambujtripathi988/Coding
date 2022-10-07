
// https://leetcode.com/problems/unique-number-of-occurrences/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        map<int,int> rep ;
        set<int> a ;
        set<int> len ;
        
        for(int i = 0 ; i < arr.size() ; i++)
        {    
            rep[arr[i]] = rep[arr[i]] + 1 ;
            a.insert(arr[i]) ;
        }
        
        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
            len.insert(iter -> second) ;
        
        if(len.size() == a.size())
            return true ;
        
        else
            return false ;
    }
};
