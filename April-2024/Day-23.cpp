// Minimum Height Trees (Leetcode 310)
// Problem Link: https://leetcode.com/problems/minimum-height-trees/
vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) { 
    if(n==1) return {0};
    vector<int> temp;
    vector<int> indegree(n,0);
    vector<int> adj[n];

    for(auto it : edges){
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
        indegree[it[0]]++;
        indegree[it[1]]++;
    }

    queue<int> q;
    for(int i=0;i<n;++i){
        if(indegree[i]==1){
            q.push(i);
        }
    }

    while(!q.empty()){
        int m=q.size();
        temp.clear();
        for(int i=0;i<m;++i){
            int node=q.front();
            temp.push_back(node);
            q.pop();
            for(auto it : adj[node]){
                indegree[it]--;
                if(indegree[it] == 1){
                    q.push(it);
                }
            }
        }
    }

    return temp;
}