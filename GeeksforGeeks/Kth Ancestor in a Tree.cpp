
// https://practice.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/1

//User function Template for C++
/*
Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node *left, *right;
};
*/
// your task is to complete this function

Node* solve(Node* root , int & k , int node)
{
    // base case 
    if(!root)
        return NULL ;
        
    if(root -> data == node)
        return root ;
        
    Node* leftans = solve(root -> left , k , node) ;
    Node* rightans = solve(root -> right , k , node) ;
    
    // backtracking (wapas jaa rhe)
    
    if(leftans != NULL && rightans == NULL)
    {
        k -- ;
        
        if(k <= 0)
        {
            k = INT_MAX ;
            return root ;
        }
        
        return leftans ;
    }
    
    if(leftans == NULL && rightans != NULL)
    {
        k -- ;
        
        if(k <= 0)
        {
            k = INT_MAX ;
            return root ;
        }
        
        return rightans ;
    }
}

int kthAncestor(Node *root, int k, int node)
{
    // Code here
    
    Node* ans = solve(root , k , node) ;
    
    if(ans == NULL || ans -> data == node)
        return -1 ;
        
    return ans -> data ;
}
