
// https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1

//User function Template for C++

/*
structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution
{
public:
    
    void solve(Node* root , int sum , int &maxsum , int len ,int &maxlen)
    {
        if(!root)
        {
            if(len > maxlen)
            {
                maxlen = len ;
                maxsum = sum ;
            }
            
            else if(len == maxlen)
                maxsum = max(maxsum,sum) ;
                
            return ;
        }
        
        sum += root -> data ;
        
        solve(root -> left , sum , maxsum , len +1, maxlen) ;
        solve(root -> right , sum , maxsum , len +1, maxlen) ;
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        int sum = 0 , len = 0 , maxlen = 0 , maxsum = INT_MIN ;
        
        solve(root , sum , maxsum , len , maxlen) ;
        
        return maxsum ;
    }
};
