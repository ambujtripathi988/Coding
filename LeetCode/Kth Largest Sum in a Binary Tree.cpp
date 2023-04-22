
// https://leetcode.com/problems/kth-largest-sum-in-a-binary-tree/description/

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
    long long kthLargestLevelSum(TreeNode* root, int k) 
    {
        vector<long long> ans ;

        queue<TreeNode*> q ;
        
        q.push(root) ;
        
        while(!q.empty())
        {
            long long sizee = q.size() ;
            
            vector<long long> lvl ;
            
            for(long long i = 0 ; i < sizee ; i++)
            {
                TreeNode * n = q.front() ;
                
                q.pop() ;
                
                if(n -> left)
                    q.push(n -> left) ;
                    
                if(n -> right)
                    q.push(n -> right) ;
                    
                lvl.push_back(n -> val) ;
            }
            
            long long sum = 0 ;
            
            for(long long i = 0 ; i < lvl.size() ; i++)
                sum += lvl[i] ;
                
            ans.push_back(sum) ;
        }
        
        if(ans.size() < k)
            return -1 ;

        sort(ans.begin(),ans.end()) ;

        long long n = ans.size() ;

        return ans[n - k] ;    
    }
};
