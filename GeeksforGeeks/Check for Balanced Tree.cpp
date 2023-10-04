
// https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1

// Method 1 : T.C. : O(NxN)

/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution{
    private:
    int height(Node* root){
        if(root == NULL)
            return 0 ;
            
        int lh = height(root -> left) ;
        int rh = height(root -> right) ;
        
        return 1 + max(lh, rh); // Return the maximum height of left and right subtrees.
    }
    
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
        
        if(!root)
            return true ;
            
        int lh = height(root -> left) ;
        int rh = height(root -> right) ;
        
        if(abs(lh-rh) > 1)
            return false ;
            
        return isBalanced(root -> left) && isBalanced(root -> right) ;
    }
};
