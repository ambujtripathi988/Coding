
// https://leetcode.com/problems/destination-city/

class Solution {
public:
    string destCity(vector<vector<string>>& paths) 
    {
        map<string,string> city ;
        
        string firs , fina ;
        
        for(int i = 0 ; i < paths.size() ; i++)
        {
            vector<string> way ;
            
            way = paths[i] ;
            
            city.insert({way[0],way[1]}) ;
            
            if(!i)
                firs = way[0] ;
        }
        
        map<string,string> :: iterator iter ;
        
        iter = city.find(firs) ;
        
        fina = firs ;
        
        while(iter != city.end())
        {
            iter = city.find(firs) ;
            
            if(city.find(firs) != city.end())
                fina = city[firs] ;
            
            firs = fina ;
        }
        
        return fina ;
    }
};
