
// https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/description/

class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;

        // Store nodes by (horizontal distance, level)
        vector<pair<pair<int, int>, int>> nodes;
        traverse(root, 0, 0, nodes);

        // Sort nodes by horizontal distance, level, and value
        sort(nodes.begin(), nodes.end());

        // Group nodes by horizontal distance and add to answer
        int prev_hd = nodes[0].first.first;
        ans.push_back({nodes[0].second});
        for (int i = 1; i < nodes.size(); i++) {
            int hd = nodes[i].first.first;
            int val = nodes[i].second;
            if (hd == prev_hd) {
                ans.back().push_back(val);
            } else {
                ans.push_back({val});
                prev_hd = hd;
            }
        }

        return ans;
    }

private:
    void traverse(TreeNode* node, int hd, int level, vector<pair<pair<int, int>, int>>& nodes) {
        if (!node) return;
        nodes.push_back({{hd, level}, node->val});
        traverse(node->left, hd - 1, level + 1, nodes);
        traverse(node->right, hd + 1, level + 1, nodes);
    }
};
