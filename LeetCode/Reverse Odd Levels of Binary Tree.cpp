
// https://leetcode.com/problems/reverse-odd-levels-of-binary-tree/description/

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
    TreeNode* reverseOddLevels(TreeNode* root) 
    {
        if(!root)
            return NULL ;

        traverse(root -> left , root -> right , 1) ;

        return root ;    
    }

    void traverse(TreeNode* n1 , TreeNode* n2 , int lvl)
    {
        if(n1 == NULL || n2 == NULL)
            return ;

        if(lvl % 2)
        {
            int temp = n1 -> val ;
            n1 -> val = n2 -> val ;
            n2 -> val = temp ;
        }

        traverse(n1 -> left , n2 -> right , lvl+1) ;
        traverse(n1 -> right , n2 -> left , lvl+1) ;
    }
};
