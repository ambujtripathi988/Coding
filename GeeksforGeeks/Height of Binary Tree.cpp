
// https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1

//User function template for C++

/*
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
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* root){
        // code here 
        
        if(root == NULL)
            return 0 ;
            
        int lh = 1 + height(root -> left) ;
        int rh = 1 + height(root -> right) ;
        
        return max(lh,rh) ;
    }
};
