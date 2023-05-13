
// https://leetcode.com/problems/partition-equal-subset-sum/description/

class Solution {
public:
    bool canPartition(vector<int>& arr) {
        int n = arr.size();
        int sum = accumulate(arr.begin(), arr.end(), 0);
        
        if (sum % 2 != 0) { // odd sum
            return false;
        }
        
        sum /= 2; // target sum for each subset
        
        vector<vector<bool>> dp(n+1, vector<bool>(sum+1, false));
        
        // base case: an empty subset can sum up to 0
        for (int i = 0; i <= n; i++) {
            dp[i][0] = true;
        }
        
        // fill the table row by row
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= sum; j++) {
                if (j < arr[i-1]) { // cannot include current element
                    dp[i][j] = dp[i-1][j];
                } else { // can include or exclude current element
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
                }
            }
        }
        
        return dp[n][sum];
    }
};
