
// https://leetcode.com/problems/kth-missing-positive-number/description/

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_map<int, bool> no;
        vector<int> vect;

        for (int i = 0; i < arr.size(); i++) {
            no[arr[i]] = true;
        }

        int count = 0;
        for (int i = 1; count < k; i++) {
            if (no.find(i) == no.end()) {
                vect.push_back(i);
                count++;
            }
        }

        return vect[k - 1];
    }
};
