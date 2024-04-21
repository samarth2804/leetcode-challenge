// Find if Path Exists in Graph (Leetcode 1971) 
// Problem Link: https://leetcode.com/problems/find-if-path-exists-in-graph/description

void dfs(int s,const int &d,vector<int> adj[], vector<bool> &vis){
    vis[s]=true;
    if(s==d) return;

    for(auto it : adj[s]){
        if(!vis[it]){
            dfs(it,d,adj,vis);
        }   
    }
}

bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    vector<int> adj[n];
    int m=edges.size();
    for(int i=0;i<m;++i){
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }

    vector<bool> vis(n,false);

    dfs(source,destination,adj,vis);

    return vis[destination];
}