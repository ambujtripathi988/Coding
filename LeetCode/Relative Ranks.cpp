
// https://leetcode.com/problems/relative-ranks/description/

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) 
    {
        priority_queue<int> mh ;        // maxHeap

        int n = score.size() , count = 1 ;

        for(int i = 0 ; i < n ; i++)
            mh.push(score[i]) ;

        unordered_map<int,string> rank ;

        while(!mh.empty())
        {
            if(count == 1)
            {
                rank[mh.top()] = "Gold Medal" ;
                count ++ ;
                mh.pop() ;
            }

            else if(count == 2)
            {
                rank[mh.top()] = "Silver Medal" ;
                count ++ ;
                mh.pop() ;
            }

            else if(count == 3)
            {
                rank[mh.top()] = "Bronze Medal" ;
                count ++ ;
                mh.pop() ;
            }

            else
            {
                rank[mh.top()] = to_string(count) ;
                count ++ ;
                mh.pop() ;
            }
        }

        vector<string> ans ;

        for(int i = 0 ; i < n ; i ++)
            ans.push_back(rank[score[i]]) ;

        return ans ;
    }
};
