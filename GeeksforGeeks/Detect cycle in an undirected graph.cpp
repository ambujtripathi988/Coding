
// https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

class Solution {
  private:
  bool cyc(int source , vector<int>& visit , vector<int> adj[])
  {
        unordered_map<int,int> parent ;
        parent[source] = -1 ;
        
        visit[source] = 1 ;
        queue<int> q ;
        q.push(source) ;
        
        while(!q.empty())
        {
            int front = q.front() ;
            q.pop() ;
            
            for(auto neigh : adj[front])
            {
                if(visit[neigh] == 1 && neigh != parent[front])             // agar neigh uska parent nhi hai to wo visit kaise ho gya, iska mtlb kahi aur se wo visit hua h -> cycle hai
                    return true ;
                    
                else if(visit[neigh] == 0)
                {
                    visit[neigh] = 1 ;
                    q.push(neigh) ;
                    parent[neigh] = front ;
                }
            }
        }
        
        return false ;
  }
  
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) 
    {
        vector<int> visit(V,0) ;
        
        for(int i = 0 ; i < V ; i++)
        {
            if(visit[i] == 0)
            {
                bool ans = cyc(i , visit , adj) ;
                
                if(ans)
                    return true ;
            }
        }
        
        return false ;
    }
};
