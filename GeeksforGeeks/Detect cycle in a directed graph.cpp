
// https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

class Solution {
  private:
  bool checkCycle(int node, vector<int> adj[], vector<bool>&visited, vector<bool>&disvisited)
  {
        visited[node] = true;
        disvisited[node] = true;
        
        for(auto i: adj[node])
        {
            if(!visited[i])
            {
                if(checkCycle(i, adj, visited, disvisited))
                    return true;
            }
            
            else if(disvisited[i])
                return true;
        }
        
        
        disvisited[node] = false;
        
        return false;
    }
    
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) 
    {
        vector<bool> visited(V, false);
        vector<bool> disvisited(V, false);
        
        for(int i=0;i<V;i++)
            if(!visited[i])
                if(checkCycle(i, adj, visited, disvisited))
                    return true;
        
        return false;
    }
};
