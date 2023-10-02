
// https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1

// Method 1 : T.C. : O(NxN)

/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  private:
    int height(struct Node* root){
        if(root == NULL)
            return 0 ;
            
        int lh = height(root -> left) ;
        int rh = height(root -> right) ;
        
        return 1 + max(lh, rh); // Return the maximum height of left and right subtrees.
    }
    
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        
        if(root == NULL)
            return 0 ;
            
        int lh = height(root -> left) ;
        int rh = height(root -> right) ;
        
        int dia = 1 + lh + rh ;
        
        int ldia = diameter(root -> left) ;
        int rdia = diameter(root -> right) ;
        
        return max(dia , max(ldia , rdia) ) ;
    }
};
