
// https://practice.geeksforgeeks.org/problems/bst-to-max-heap/1

/*struct Node {
    int data;
    Node *left, *right;
};*/

class Solution{
  public:
  
    queue<int> in ;
    
    void convertToMaxHeapUtil(Node* root)
    {
        // Your code goes here
        
        inorder(root) ;
        
        fillpre(root , in) ;
    }  
    
    void inorder(Node* root)
    {
        if(root == NULL)
            return ;
        
        inorder(root -> right) ;
        
        in.push(root -> data) ;
        
        inorder(root -> left) ;
    }
    
    void fillpre(Node* root , queue<int> &in)
    {
        if(root == NULL)
            return ;
            
        root -> data = in.front() ;
        in.pop() ;
        
        fillpre(root -> right , in) ;
        fillpre(root -> left , in) ;
    }
};
