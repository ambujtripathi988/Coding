
// https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> ans ;

    void in(TreeNode* root)
    {
        if(!root)
            return ;

        in(root -> left) ;
        ans.push_back(root -> val) ;
        in(root -> right) ;
    }

    int findSecondMinimumValue(TreeNode* root) 
    {
        in(root) ;

        set<int> s ;

        for(int i = 0 ; i < ans.size() ; i++)
            s.insert(ans[i]) ;

        // cout << "size : " << s.size() ;

        if(s.size() < 2)
            return -1 ;

        ans.clear() ;

        for(auto it = s.begin() ; it != s.end() ; it++)
            ans.push_back(*it) ;

        return ans[1] ;
    } 
};
