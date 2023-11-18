
// https://practice.geeksforgeeks.org/problems/find-a-pair-with-given-target-in-bst/1

class Solution{
  private:
    void inorder(struct Node *root, vector<int> &ans)
    {
        if(root == NULL)
            return ;
            
        inorder(root -> left, ans) ;
        ans.push_back(root -> data) ;
        inorder(root -> right, ans) ;
    }
  
  public:
    // root : the root Node of the given BST
    // target : the target sum
    int isPairPresent(struct Node *root, int target)
    {
        // initializatoin
        vector<int> ans ;
        
        inorder(root, ans) ;
        
        // initilization
        int i = 0 , j = ans.size()-1 ;
        
        while(i < j)
        {
            int sum = ans[i] + ans[j] ;
            
            if(sum == target)
                return 1 ;
                
            if(sum > target)
                j-- ;
                
            else
                i++ ;
        }
        
        return 0 ;
    }
};
