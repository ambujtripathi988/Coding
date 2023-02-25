
// https://leetcode.com/problems/last-stone-weight/description/

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) 
    {
        priority_queue<int> heavy ;         // maxHeap

        for(int i = 0 ; i < stones.size() ; i++)
            heavy.push(stones[i]) ;

        while(heavy.size() > 1)
        {
            int x = heavy.top() ;
            heavy.pop() ;
            int y = heavy.top() ;
            heavy.pop() ;

            if(x != y)
                heavy.push(abs(x-y)) ;
        }

        return heavy.size() ? heavy.top() : 0 ;             // ternary operator
    }
};
