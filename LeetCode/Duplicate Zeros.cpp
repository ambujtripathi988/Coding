
// https://leetcode.com/problems/duplicate-zeros/description/

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            if (ans.size() >= n)
                break;

            if (arr[i] == 0) {
                ans.push_back(0);
                if (ans.size() < n)  // Check if ans has space for another zero
                    ans.push_back(0);
            } else {
                ans.push_back(arr[i]);
            }
        }

        arr = ans;  // Assign the modified vector back to arr
    }
};
