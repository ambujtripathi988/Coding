
// https://practice.geeksforgeeks.org/problems/4b7ff87c26ed23b3f63c25c611690213d44fb6aa/1

/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

class Solution{
  public:
    /*You are required to complete below method */
    
    int maxLevelSum(Node* root) 
    {
        // Your code here
        
        vector<int> ans ;
    
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
            
            int sum = 0 ;
            
            for(int i = 0 ; i < lvl.size() ; i++)
                sum += lvl[i] ;
                
            ans.push_back(sum) ;
        }
        
        return *max_element(ans.begin(),ans.end()) ;
    }
};
