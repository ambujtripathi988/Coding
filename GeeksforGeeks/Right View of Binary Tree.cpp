
// https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1

/* A binary tree node has data, pointer to left child
   and a pointer to right child 
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

// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
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
            view.push_back(ans[i].back()) ;
            
        return view ;
    }
};
