
// https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1

/* A binary tree node

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

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
    vector<vector<int>> ans ;
    
    if(!root)
        return {} ;
        
    queue<Node*> q ;
    
    q.push(root) ;
    
    while(!q.empty())
    {
        int sizee = q.size() ;
        
        vector<int> lvl ;
        
        for(int i = 0 ; i < sizee ; i++)
        {
            Node * n = q.front() ;
            
            q.pop() ;
            
            if(n -> left)
                q.push(n -> left) ;
                
            if(n -> right)
                q.push(n -> right) ;
                
            lvl.push_back(n -> data) ;
        }
        
        ans.push_back(lvl) ;
    }
    
    vector<int> view ;
    
    for(int i = 0 ; i < ans.size() ; i++)
        view.push_back(ans[i][0]) ;
        
    return view ;
}
