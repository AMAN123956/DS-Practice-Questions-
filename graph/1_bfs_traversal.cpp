 // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        queue<int> q;
        vector<int> ans;
        vector<bool> vis(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                q.push(i);
                vis[i]=true;
                while(!q.empty()){
                    int node = q.front();
                    q.pop();
                    ans.push_back(node);
                    for(auto it: adj[node]){
                        if(!vis[it]){
                            vis[it]=true;
                            q.push(it);
                        }
                    }
                }
            }
        }
        return ans;
    }


Time Complexity: O(V+E)
  V - No of Vertices
  E - No of Edges
