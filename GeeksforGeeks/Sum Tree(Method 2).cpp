
// https://practice.geeksforgeeks.org/problems/sum-tree/1

// Method 2 : T.C. : O(N)

/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution
{
    private:
    pair<bool, int> solve(Node* root)
    {
        // base case
        if(root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0) ;
            return p ;
        }
        
        // leaf node
        if(root -> left == NULL && root -> right == NULL)
        {
            pair<bool, int> p = make_pair(true, root -> data) ;
            return p ;
        }
        
        pair<bool, int> leftAns = solve(root -> left) ;
        pair<bool, int> rightAns = solve(root -> right) ;
        
        int sum = leftAns.second + rightAns.second ;
        
        bool check = root -> data == sum ? true : false ;
        
        pair<bool, int> ans ;
        
        if(leftAns.first && rightAns.first && check)
        {
            ans.first = true ;
            ans.second = root -> data + sum ;
        }
        
        else
        {
            ans.first = false ;
            ans.second = root -> data + sum ;     // iski need nhi hai kyuki ab ye sum tree hai nhi to koi mtlb nhi h iska
        }
        
        return ans ;
    }
    
    public:
    bool isSumTree(Node* root)
    {
         return solve(root).first ;
    }
};
