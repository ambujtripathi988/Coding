
// https://leetcode.com/problems/relative-sort-array/

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
    {
        map<int,int> mape ;
        map<int,int> rep ;
        
        set<int> a1 ;
        set<int> a2 ;
        
        for(int i = 0 ; i < arr1.size() ; i++)
            mape[arr1[i]] = mape[arr1[i]] + 1 ;
        
        vector<int> ans ;
        
        for(int i = 0 ; i < arr2.size() ; i++)
        {
            a2.insert(arr2[i]) ;
            
            if(mape.find(arr2[i]) != mape.end())
            {
                int x = mape[arr2[i]] ;
                
                while(x--)
                    ans.push_back(arr2[i]) ;
            }
        }
            
        for(int i = 0 ; i < arr1.size() ; i++)
        {
            if(a2.find(arr1[i]) == a2.end())
            {
                a1.insert(arr1[i]) ;
                rep[arr1[i]] = rep[arr1[i]] + 1 ;
            }
        }
        
        for(auto iter = a1.begin() ; iter != a1.end() ; iter++)
        {    
            int x = rep[*iter] ;
            
            while(x--)
                ans.push_back(*iter) ;
        }
        
        return ans ;
    }
};
