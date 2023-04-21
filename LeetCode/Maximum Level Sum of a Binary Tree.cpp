
// https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/description/

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
    int maxLevelSum(TreeNode* root) 
    {   
        queue<TreeNode*> q ;
        q.push(root) ;   
        q.push(NULL) ;

        int maxsum = INT_MIN , sum = 0 , lvl = 1 , maxlvl = 1 ;
        
        while(!q.empty())
        {
            TreeNode* fr = q.front() ;
            q.pop() ;
            
            if(fr == NULL)
            {
                if(sum > maxsum)
                {
                    maxsum = sum ;
                    maxlvl = lvl ;
                }

                if(q.size() == 0)
                    return maxlvl ;

                else
                {
                    sum = 0 ;
                    q.push(NULL) ;
                    lvl++ ;
                }
            }

            else
            {
                sum += fr -> val ;

                if(fr -> left)
                    q.push(fr -> left) ;

                if(fr -> right)
                    q.push(fr -> right) ;
            }
        }

        return maxlvl ;
    }
};

// help : https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/solutions/2980765/easy-c-level-order-traversal-with-steps-bfs-solution-with-comments/
