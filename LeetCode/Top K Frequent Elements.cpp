
// https://leetcode.com/problems/top-k-frequent-elements/description/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        priority_queue<pair<int,int>> pq ;          // maxHeap
        unordered_map<int,int> rep ;

        for(int i = 0 ; i < nums.size() ; i++)
            rep[nums[i]] ++ ;

        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
            pq.push( make_pair(iter->second , iter->first) ) ;

        set<int> ans ;

        while(k--)
        {
            pair<int,int> p = pq.top() ;
            pq.pop() ;

            while(p.first--)
                ans.insert(p.second) ;
        }

        vector<int> arr ;

        for(auto iter = ans.begin() ; iter != ans.end() ; iter++)
            arr.push_back(*iter) ;

        return arr ;
    }
};
