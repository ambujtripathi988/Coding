
// https://practice.geeksforgeeks.org/problems/maximum-sum-of-non-adjacent-nodes/1

//User function Template for C++

//Node Structure
/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution{
  public:
  
    pair<int,int> solve(Node* root)
    {
        // base case
        if(!root)
            return {0,0} ;
            
        pair<int,int> leftp = solve(root -> left) ;
        pair<int,int> rightp = solve(root -> right) ;
        
        pair<int,int> res ;
        
        // including current node
        res.first = root -> data + leftp.second + rightp.second ;
        
        // excluding current node
        res.second = max(leftp.first , leftp.second) + max(rightp.first , rightp.second) ;
        
        return res ;
    }
   
    //Function to return the maximum sum of non-adjacent nodes.
    int getMaxSum(Node *root) 
    {
        // Add your code here
        
        pair<int,int> ans = solve(root) ;
        
        return max(ans.first , ans.second) ;
    }
};
