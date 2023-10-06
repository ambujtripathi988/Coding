
// https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1

// Method 2 : T.C. : O(N)

/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution{
    private:
    pair<bool,int> balBT(Node* root)
    {
        // base case 
        if(root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0) ;
            return p ;
        }
    
        pair<bool, int> left = balBT(root -> left) ;
        pair<bool, int> right = balBT(root -> right) ;
    
        int high = max(left.second, right.second) + 1 ;
    
        bool third = abs(left.second - right.second) <= 1 ? true : false ;
    
        pair<bool, int> ans ;
    
        if(left.first && right.first && third)
        {
            ans.first = true ;
            ans.second = high ;
        }
    
        else
        {
            ans.first = false ;
            ans.second = high ;
        }
    
        return ans ;
    }
    
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        return balBT(root).first ;
    }
};
