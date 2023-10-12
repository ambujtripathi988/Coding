
// https://practice.geeksforgeeks.org/problems/zigzag-tree-traversal/1

//User function Template for C++
/*Structure of the node of the binary tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
        // Code here
        
        vector<int> res ;
        
        if(root == NULL)
            return res ;
            
        queue<Node*> q ;
        q.push(root) ;
        
        bool ltor = true ;
        
        while(!q.empty())
        {
            int sizee = q.size() ;
            vector<int> ans(sizee) ;
            
            // level traversal
            for(int i = 0 ; i < sizee ; i++)
            {
                Node *frontNode = q.front() ;
                q.pop() ;
                
                // normal insert hoga ya reverse mein
                int inde = ltor ? i : sizee - i - 1 ;
                
                ans[inde] = frontNode -> data ;
                
                if(frontNode -> left)
                    q.push(frontNode -> left) ;
                    
                if(frontNode -> right)
                    q.push(frontNode -> right) ;
            }
            
            ltor = !ltor ;
            
            for(auto i : ans)
                res.push_back(i) ;
        }
        
        return res ;
    }
};
