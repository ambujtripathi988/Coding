
// https://practice.geeksforgeeks.org/problems/sum-tree/1

// Method 1 : T.C. : O(NxN)

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
    int addition(Node* root)
    {
        if(root == NULL)            // base case
            return 0 ;
            
        if(root -> left == NULL && root -> right == NULL)       // leaf node
            return root -> data ;
        
        int leftSum = addition(root -> left) ;
        int rightSum = addition(root -> right) ;
        
        if(root -> data == leftSum + rightSum)
            return root -> data + leftSum + rightSum ;
            
        else
            return -1 ;
    }
    
    public:
    bool isSumTree(Node* root)
    {
         // Your code here
         
        if(root == NULL)
            return true ;
         
        if(root -> left == NULL && root -> right == NULL)
            return true ;
            
        int leftSum = addition(root -> left) ;
        
        if(leftSum == -1)
            return false ;
        
        int rightSum = addition(root -> right) ;
        
        if(rightSum == -1)
            return false ;
            
        if(root -> data != leftSum + rightSum) 
            return false ;
            
        return isSumTree(root -> left) && isSumTree(root -> right) ;
    }
};
