
// https://leetcode.com/problems/average-of-levels-in-binary-tree/

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
    vector<double> averageOfLevels(TreeNode* root) 
    {
        vector<double> ans ;
        
        if(root == NULL)
            return ans ;
        
        queue<TreeNode*> q ;
        
        q.push(root) ;
        
        while(!q.empty())
        {
            int sizee = q.size() ;
            vector<double> level ;
            
            for(int i = 0 ; i < sizee ; i++)
            {
                TreeNode* node = q.front() ;
                
                q.pop() ;
                
                if(node -> left != NULL)
                    q.push(node -> left) ;
                
                if(node -> right != NULL)
                    q.push(node -> right) ;
                
                level.push_back((node -> val)*1.0) ;
            }  
            
            double sum = 0 ;
            double avg = 0 ;
            
            for(int i = 0 ; i < level.size() ; i++)
                sum += level[i] ;
            
            avg = (sum*1.0) / level.size() ;
            
            ans.push_back(avg) ;
        }
        
        return ans ;
    }
};
