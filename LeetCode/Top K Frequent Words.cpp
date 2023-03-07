
// https://leetcode.com/problems/top-k-frequent-words/description/

class Solution {
public:
    struct comp {
        bool operator() (pair<int, string> &a, pair<int, string> &b){
            if(a.first==b.first)
                return a.second<b.second;
            return a.first > b.first;
        }
    };

    vector<string> topKFrequent(vector<string>& words, int k) 
    {
        unordered_map<string,int> mp ;

        for(int i = 0 ; i < words.size() ; i++)
            mp[words[i]] ++ ;

        priority_queue< pair<int, string>, vector<pair<int, string>>,comp > pq ;        // minHeap

        for(auto iter = mp.begin() ; iter != mp.end() ; iter++)
        {
            pq.push( {iter-> second , iter -> first} ) ;

            if(pq.size() > k)
                pq.pop() ;    
        }

        words.clear() ;

        while(pq.size())  
        {
            pair<int,string> p = pq.top() ;
            pq.pop() ;

            words.push_back(p.second) ;
        }    

        reverse(words.begin(),words.end()) ;

        return words ;
    }
};
