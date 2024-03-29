
// https://practice.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1

class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) 
    {
        vector<vector<int>> adj(V) ;
        
        for(int i = 0 ; i < edges.size() ; i++)
        {
            int u = edges[i].first ;
            int v = edges[i].second ;
            
            adj[u].push_back(v) ;
            
            // since its an undirected graph
            adj[v].push_back(u) ;
        }
        
        return adj ;
    }
};
