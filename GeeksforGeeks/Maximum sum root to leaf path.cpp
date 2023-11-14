
// https://practice.geeksforgeeks.org/problems/maximum-sum-leaf-to-root-path/1

//User function Template for C++

class Solution{
    private:
    void solve(Node* root, int sum, int &maxSum)
    {
        // base case
        if (root == NULL)
            return ;

    
        sum = sum + root->data;
        
        if(root -> left == NULL && root -> right == NULL)
            maxSum = max(maxSum, sum) ;
    
        // recursive calls
        solve(root->left, sum, maxSum);
        solve(root->right, sum, maxSum);
    }

    public:
    int maxPathSum(Node* root)
    {
        if (root == NULL)
            return 0 ;
    
        // initializations
        int sum = 0;
        int maxSum = INT_MIN;
    
        solve(root, sum, maxSum);
    
        return maxSum ;
    }
};
