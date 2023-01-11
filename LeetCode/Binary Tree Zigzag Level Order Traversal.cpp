
// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>> result ;
        
        if(root == NULL)
            return result ;
        
        queue<TreeNode*> nodesQ ;
        
        nodesQ.push(root) ;
        
        bool lefttoright = true ;
        
        while(!nodesQ.empty())
        {
            int sizee = nodesQ.size() ;
            
            vector<int> row(sizee) ;
            
            for(int i = 0 ; i < sizee ; i++)
            {
                TreeNode* node = nodesQ.front() ;
                
                nodesQ.pop() ;
                
                int inde = (lefttoright) ? i : (sizee - 1 - i) ;
                
                row[inde] = node -> val ;
                
                if(node -> left)
                    nodesQ.push(node -> left) ;
                
                if(node -> right)
                    nodesQ.push(node -> right) ;
            } 
            
            lefttoright = !lefttoright ;
            
            result.push_back(row) ;
        }
        
        return result ;
    }
};
