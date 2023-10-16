
// https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) 
    {
         vector<int> ans;
        queue<int> q;
        
        q.push(0);
        
        vector<bool> visit(V, false);
        
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            
            if (visit[node] == false) {
                ans.push_back(node);
                visit[node] = true;
                
                for (auto i : adj[node]) {
                    if (visit[i] == false) {
                        q.push(i);
                    }
                }
            }
        }
        
        return ans;
    }
};
