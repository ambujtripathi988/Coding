
// https://leetcode.com/problems/determine-if-two-events-have-conflict/description/

class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) 
    {
        return event1[0] <= event2[1] && event2[0] <= event1[1] ;    
    }
};

// Time Complexity : O(1) 
// Space Complexity : O(1) 
