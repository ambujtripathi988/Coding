
// https://practice.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1

/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

int findPosi(int in[] , int element , int inStart , int inEnd)
{
    for(int i = inStart ; i <= inEnd ; i++)
        if(in[i] == element)
            return i ;
            
    return -1 ;
}

Node* solve(int in[] , int post[] , int &inde , int inStart , int inEnd , int n)
{
    if(inde < 0 || inStart > inEnd)
        return NULL ;
        
    int element = post[inde--] ;     // also decrementing the index
    
    // creating a node
    Node *root = new Node(element) ;
    
    int posi = findPosi(in , element , inStart, inEnd) ;
    
    // recursive calls : 

    root -> right = solve(in , post , inde , posi+1 , inEnd , n) ;
    
    root -> left = solve(in , post , inde , inStart , posi-1 , n) ;

    return root ;
}

//Function to return a tree created from postorder and inoreder traversals.
Node *buildTree(int in[], int post[], int n) 
{
    int postOrderInde = n-1 ;
        
    Node *ans = solve(in , post , postOrderInde , 0 , n-1 , n) ;
    
    return ans ;    
}
