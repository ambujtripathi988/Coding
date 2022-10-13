
// https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/

class Solution {
public:
    bool areOccurrencesEqual(string s) 
    {
        unordered_map<char,int> rep ;
        unordered_set<int> fre ;
        
        for(int i = 0 ; i < s.length() ; i++)
            rep[s[i]] = rep[s[i]] + 1 ;
        
        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
            fre.insert(iter -> second) ;
        
        if(fre.size() == 1)
            return true ;
        
        else
            return false ;
    }
};
