
// https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1

// Method 2 : T.C. : O(N)

/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  private:
    pair<int,int> solve(Node* root)
    {
        // base case
        if(root == NULL)
        {
            pair<int,int> p = make_pair(0,0) ;
            return p ;
        }
    
        pair<int,int> left = solve(root -> left) ;
        pair<int,int> right = solve(root -> right) ;
    
        int opt1 = left.first ;
        int opt2 = right.first ;
    
        int opt3 = left.second + right.second + 1 ;
    
        pair<int,int> ans ;
    
        // diameter
        ans.first = max(opt1, max(opt2, opt3)) ;
        
        // height
        ans.second = 1 + max(left.second, right.second) ;
    
        return ans ;
    }

  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) 
    {
        // base case
        if(root == NULL)
            return 0 ;
    
        return solve(root).first ;
    }
};
