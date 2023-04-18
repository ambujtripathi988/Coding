
// https://leetcode.com/problems/find-bottom-left-tree-value/description/

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
    int findBottomLeftValue(TreeNode* root) 
    {
        vector<vector<int>> ans ;
    
        if(!root)
            return {} ;
            
        queue<TreeNode*> q ;
        
        q.push(root) ;
        
        while(!q.empty())
        {
            int sizee = q.size() ;
            
            vector<int> lvl ;
            
            for(int i = 0 ; i < sizee ; i++)
            {
                TreeNode * n = q.front() ;
                
                q.pop() ;
                
                if(n -> left)
                    q.push(n -> left) ;
                    
                if(n -> right)
                    q.push(n -> right) ;
                    
                lvl.push_back(n -> val) ;
            }
            
            ans.push_back(lvl) ;
        }
    
        return ans.back()[0] ;
    }
};
