
// https://leetcode.com/problems/mean-of-array-after-removing-some-elements/

class Solution {
public:
    double trimMean(vector<int>& arr) 
    {
        sort(arr.begin() , arr.end()) ;
        
        int sizee = (5 * arr.size()) / 100 ;
        
        list<int> l ;
        
        for(int i = 0 ; i < arr.size() ; i++)
            l.push_back(arr[i]) ;
        
        while(sizee--)
        {
            l.pop_front() ;
            l.pop_back() ;
        }
        
        int sum = 0 ;
        
        for(auto iter = l.begin() ; iter != l.end() ; iter++)
            sum += *iter ;
        
        return (sum * 1.0 ) / l.size() ;
    }
};
