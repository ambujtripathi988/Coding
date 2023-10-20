
// https://practice.geeksforgeeks.org/problems/topological-sort/1

class Solution
{
    public:
    //Function to return list containing vertices in Topological order. 
    vector<int> topoSort(int V, vector<int> adj[]) 
    {
        // mark inDegree of all the nodes
        vector<int> inDegree(V);
    
        for (int i = 0; i < V; ++i) {
            for (auto j : adj[i]) {
                inDegree[j]++;
            }
        }
    
        // push the node in the queue which has inDegree == 0     
        queue<int> q;
    
        for (int i = 0; i < V; ++i) {
            if (inDegree[i] == 0)
                q.push(i);
        }
    
        vector<int> ans;
    
        // perform BFS
        while (!q.empty()) {
            int front = q.front();
            q.pop();
    
            ans.push_back(front);
    
            for (auto neigh : adj[front]) {
                inDegree[neigh]--;
    
                if (inDegree[neigh] == 0)
                    q.push(neigh);
            }
        }
    
        return ans;
    }
};
