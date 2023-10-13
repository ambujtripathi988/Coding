
// https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */


vector<int> diagonal(Node *root)
{
    vector<int> ans ;
    
    if(root == NULL)
        return ans ;
        
    queue<Node*> q ;
    
    q.push(root) ;
    
    while(!q.empty())
    {
        Node *temp = q.front() ;
        q.pop() ;
        
        while(temp)                 // right mein chalte chale jaao, jb tak jaa skte ho
        {
            if(temp -> left)
                q.push(temp -> left) ;
                
            ans.push_back(temp -> data) ;
            
            temp = temp -> right ;
        }
    }
    
    return ans ;
}
