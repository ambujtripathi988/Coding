
// https://leetcode.com/problems/find-mode-in-binary-search-tree/description/

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
    vector<int> arr ;
    vector<int> findMode(TreeNode* root) 
    {
        in(root) ;    

        unordered_map<int,int> rep ;

        for(int i = 0 ; i < arr.size() ; i++)
            rep[arr[i]] = rep[arr[i]] + 1 ;

        int maxi = -1 ;

        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
            maxi = max(maxi , iter -> second) ;

        vector<int> ans ;
        unordered_set<int> s ;

        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
            if(iter -> second == maxi)
                s.insert(iter -> first) ;

        for(auto iter = s.begin() ; iter != s.end() ; iter++)
            ans.push_back(*iter) ;

        return ans ;
    }

    void in(TreeNode* root)
    {
        if(root == NULL)
            return ;

        in(root -> left) ;
        arr.push_back(root -> val) ;
        in(root -> right) ;
    }
};
