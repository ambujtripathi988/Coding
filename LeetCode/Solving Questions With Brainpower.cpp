
// https://leetcode.com/problems/solving-questions-with-brainpower/description/

class Solution {
public:
    // recursion + memoization
    long long solveMem(long long index, vector<vector<int>>& questions, vector<long long>& dp) {
        // base case 
        if (index >= questions.size())
            return 0;

        if (dp[index] != -1)
            return dp[index];

        long long solveCurrent = 0;

        if (index + questions[index][1] < questions.size()) {
            solveCurrent = questions[index][0] + solveMem(index+1 + questions[index][1], questions, dp);
        } else {
            solveCurrent = questions[index][0];
        }

        long long skipCurrent = solveMem(index + 1, questions, dp);

        return dp[index] = max(solveCurrent, skipCurrent);
    }

    long long mostPoints(vector<vector<int>>& questions) {
        long long n = questions.size();

        /// dp array
        vector<long long> dp(n + 1, -1);

        return solveMem(0, questions, dp);
    }
};
