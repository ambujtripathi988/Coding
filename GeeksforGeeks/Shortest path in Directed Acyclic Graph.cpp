
// https://practice.geeksforgeeks.org/problems/shortest-path-in-undirected-graph/1

// User function Template for C++
class Solution {
  private:
    void prepareAdj(int u , int v , int w , unordered_map<int , list<pair<int,int>>>& adj)
    {
        pair<int,int> p = make_pair(v,w) ;
        
        adj[u].push_back(p) ;
    }
  
    void topoDFS(int node , unordered_map<int,bool>& visit , stack<int>& s , unordered_map<int , list<pair<int,int>>>& adj)
    {
        visit[node] = true ;
        
        for(auto neigh : adj[node])
            if(!visit[neigh.first])
                topoDFS(neigh.first , visit , s , adj) ;
                
        s.push(node) ;
    }
    
    void getShortestPath(int src , vector<int>&dist , stack<int>& s , unordered_map<int , list<pair<int,int>>>& adj)
    {
        dist[src] = 0 ;
        
        while(!s.empty())
        {
            int top = s.top() ;
            s.pop() ;
            
            if(dist[top] != INT_MAX)
                for(auto i : adj[top])
                    if(dist[top]+i.second < dist[i.first])
                        dist[i.first] = dist[top] + i.second ; 
        }
    }
 
  public:
    vector<int> shortestPath(int N,int M, vector<vector<int>>& edges)
    {
        unordered_map<int , list<pair<int,int>>> adj ;
        
        for(int i = 0 ; i < M ; i++)
            prepareAdj(edges[i][0] , edges[i][1] , edges[i][2] , adj) ;
            
        unordered_map<int,bool> visit ;
        stack<int> s ;
        
        for(int i = 0 ; i < N ; i++)
            if(!visit[i])
                topoDFS(i , visit , s , adj) ;
                
                
        int src = 0 ;
        
        vector<int> dist(N) ;
        
        for(int i = 0 ; i < N ; i++)
            dist[i] = INT_MAX ;
            
        getShortestPath(src , dist , s , adj) ;
        
        for(int i = 0 ; i < N ; i++)
            if(dist[i] == INT_MAX)
                dist[i] = -1 ;
                
        return dist ;
    }
};
