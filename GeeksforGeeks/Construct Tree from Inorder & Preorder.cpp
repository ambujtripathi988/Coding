
// https://practice.geeksforgeeks.org/problems/construct-tree-1/1

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    private:
    int findPosi(int in[] , int element , int inStart , int inEnd)
    {
        for(int i = inStart ; i <= inEnd ; i++)
            if(in[i] == element)
                return i ;
                
        return -1 ;
    }
    
    Node* solve(int in[] , int pre[] , int &inde , int inStart , int inEnd , int n)
    {
        if(inde >= n || inStart > inEnd)
            return NULL ;
            
        int element = pre[inde++] ;     // also incrementing the index
        
        // creating a node
        Node *root = new Node(element) ;
        
        int posi = findPosi(in , element , inStart, inEnd) ;
        
        // recursive calls : 
        
        root -> left = solve(in , pre , inde , inStart , posi-1 , n) ;
        
        root -> right = solve(in , pre , inde , posi+1 , inEnd , n) ;
        
        return root ;
    }
    
    public:
    Node* buildTree(int in[],int pre[], int n)
    {
        int preOrderInde = 0 ;
        
        Node *ans = solve(in , pre , preOrderInde , 0 , n-1 , n) ;
        
        return ans ;
    }
};
