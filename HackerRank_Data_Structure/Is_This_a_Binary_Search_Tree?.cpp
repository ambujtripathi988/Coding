
// https://www.hackerrank.com/challenges/is-binary-search-tree/problem?isFullScreen=false

/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
    struct Node {
        int data;
        Node* left;
        Node* right;
    }
*/
bool checkBST(Node* root ,int min, int max ) 
{
    if(root == NULL)                // Base case. An empty tree is a BST.
    {
        return true ;
    }
    
    if(root -> data < min )         // Checking if a key is outside the permitted range.
    {
        return false ;
    }
    
    else if(root -> data > max)
    {
        return false ;
    }
    

    // Sending in updates ranges to the right and left subtree

    return (checkBST(root -> left , min , root -> data -1) && checkBST(root -> right , root -> data + 1 , max )) ;
    
}

bool checkBST(Node *root)
{
    return checkBST(root , 0 , 10000) ;
}
