
// https://leetcode.com/problems/validate-binary-search-tree/description/

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

    bool isValidBST(TreeNode* root) 
    {
        in(root) ;

        set<int> vect ;

        for(int i = 0 ; i < arr.size() ; i++)
            vect.insert(arr[i]) ;

        if(vect.size() != arr.size())
            return false ;

        int inde = 0 ;

        for(auto iter = vect.begin() ; iter != vect.end() ; iter++)
        {
            if(*iter != arr[inde])
                return false ;

            inde ++ ;
        }

        return true ;
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
