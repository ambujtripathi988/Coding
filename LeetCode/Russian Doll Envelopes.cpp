
// https://leetcode.com/problems/russian-doll-envelopes/description/

class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) 
    {
        // using dp with binary search(refer Longest Increasing Subsequence gfg practice)

        int n = envelopes.size();

        if (n == 0) 
            return 0;

        // sort envelopes by width, breaking ties by height in decreasing order
        sort(envelopes.begin(), envelopes.end(), [](vector<int>& a, vector<int>& b) {
            if (a[0] == b[0]) {
                return a[1] > b[1];
            } else {
                return a[0] < b[0];
            }
        });

        vector<int> ans;
        ans.push_back(envelopes[0][1]);

        for(int i = 1; i < n; i++) 
        {
            if(envelopes[i][1] > ans.back()) 
                ans.push_back(envelopes[i][1]);

            else 
            {
                int idx = lower_bound(ans.begin(), ans.end(), envelopes[i][1]) - ans.begin();
                ans[idx] = envelopes[i][1];
            }
        }

        return ans.size();
    }
};
