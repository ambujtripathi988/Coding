
// https://leetcode.com/problems/sort-array-by-increasing-frequency/description/

class Solution {
public:

    struct cmp{
        bool operator()(pair<int,int>&a,pair<int,int>&b){
            if(a.first==b.first){
                return b.second>a.second;
            }
            else{
                return a.first>b.first;
            }
        }
    };

    vector<int> frequencySort(vector<int>& nums) 
    {
        priority_queue< pair<int,int> , vector<pair<int,int>> , cmp > pq ;
        unordered_map<int,int> rep ;

        for(int i = 0 ; i < nums.size() ; i++)
            rep[nums[i]] ++ ;

        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
            pq.push( make_pair(iter->second , iter->first) ) ;

        vector<int> ans ;

        while(pq.size())
        {
            pair<int,int> p = pq.top() ;
            pq.pop() ;

            while(p.first--)
                ans.push_back(p.second) ;
        }

        return ans ;
    } 
};
