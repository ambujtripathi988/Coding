
// https://practice.geeksforgeeks.org/problems/is-binary-tree-heap/1

// User Function template for C++

// Structure of node
/*struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  private:
    int total(struct Node * root)
    {
        if(root==NULL){
            return 0;
        }

        return total(root->left)+total(root->right)+1;
    }
    
    bool isCBT(struct Node* root ,int  in, int cnt)
    {
        if(root==NULL){
            return true;
        }
        
        if(in>=cnt){
            return false;
        }
        
        else{

            bool left = isCBT(root->left,2*in+1,cnt);
            bool right = isCBT(root->right,2*in+2,cnt);
            
            return left&&right;
        }
    }
    
    bool isMaxOrder(struct Node* root)
    {
        if (root == NULL) {
            return true;
        }
        
        // Check if the left child exists and is greater than the current node
        if (root->left && root->left->data > root->data) {
            return false;
        }
        
        // Check if the right child exists and is greater than the current node
        if (root->right && root->right->data > root->data) {
            return false;
        }
        
        // Recursively check for the max-heap property in left and right subtrees
        return isMaxOrder(root->left) && isMaxOrder(root->right);
    }

    
  public:
    bool isHeap(struct Node* root) 
    {
        if(root == NULL)
            return true ;
            
        int totalNodes = total(root) ;
        
        if(isCBT(root , 0 , totalNodes) && isMaxOrder(root))
            return true ;
            
        return false ;
    }
};
