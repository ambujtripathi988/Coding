
// https://leetcode.com/problems/minimum-distance-between-bst-nodes/

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
    int minDiffInBST(TreeNode* root) 
    {
        // iterative inorder traversal :
        
        stack<TreeNode*> st ;
        
        TreeNode* node = root ;
        
        vector<int> ans ;
        
        while(true)
        {
            if(node != NULL)
            {
                st.push(node) ;
                node = node -> left ;
            }
            
            else
            {
                if(st.empty())
                    break ;
                
                node = st.top() ;
                
                st.pop() ;
                
                ans.push_back(node -> val) ;
                
                node = node -> right ;
            }
        }
        
        // if(vect.size() < 2)
        //     return ; 
        
        sort(ans.begin() , ans.end()) ;
        
        int mini = INT_MAX ;
        
        for(int i = 1 ; i < ans.size() ; i++)
            mini = min(mini,abs(ans[i] - ans[i-1])) ;
        
        return mini ;
    }
};
