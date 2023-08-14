
// https://practice.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1

int in(Node *root, int &count)
{
    if(root == NULL)
        return 0 ;
        
    if(root -> left == NULL && root -> right == NULL)
        count ++ ;
        
    in(root -> left , count) ;
    in(root -> right , count) ;
}   
   
   
int countLeaves(Node* root)
{
  // Your code here
  
  int count = 0 ;
  
  in(root,count) ;
  
  return count ;
}
