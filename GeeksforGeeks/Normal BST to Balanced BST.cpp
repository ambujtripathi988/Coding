
// https://practice.geeksforgeeks.org/problems/normal-bst-to-balanced-bst/1

/*Structure of the Node of the BST is as
struct Node
{
    int data;
    Node* left, *right;
};
*/
// Your are required to complete this function
// function should return root of the modified BST

void inorder(Node* root, vector<int> &ans)
{
    // base case
    if(root == NULL)
        return ;
        
    inorder(root -> left, ans) ;
    ans.push_back(root -> data) ;
    inorder(root -> right, ans) ;
}

Node* inToBST(int s, int e, vector<int> &ans)
{
    // base case
    if(s > e)
        return NULL ;
        
    int mid = (s+e)/2 ;
    
    Node* root = new Node(ans[mid]) ;
    
    root -> left = inToBST(s, mid-1, ans) ;
    root -> right = inToBST(mid+1, e, ans) ;
    
    return root ;
}

Node* buildBalancedTree(Node* root)
{
    // initialization
    vector<int> ans ;
    
    inorder(root, ans) ;
    
    return inToBST(0, ans.size()-1, ans) ;
}
