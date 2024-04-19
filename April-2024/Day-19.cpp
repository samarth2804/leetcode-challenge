# Number of Islands (Leetcode 200) #
# Problem Link: https://leetcode.com/problems/number-of-islands/description/

void find(int i,int j,vector<vector<int>> &vis,vector<vector<char>>& grid,int m,int n){
    vis[i][j]=1;

    int drow[]={0,0,1,-1};
    int dcol[]={-1,1,0,0};
    for(int k=0;k<4;k++){
        int nrow=i+drow[k];
        int ncol=j+dcol[k];
        if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && (grid[nrow][ncol]=='1') && (vis[nrow][ncol]==0)){
            find(nrow,ncol,vis,grid,m,n);
        }
    }
    return;
}

int numIslands(vector<vector<char>>& grid) {
    int m=grid.size();
    int n=grid[0].size();

    vector<vector<int>> vis(m,vector<int> (n,0));
    //set<vector<pair<int,int>>> st;
    int count=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if((vis[i][j]==0) && (grid[i][j]=='1')){
                count++;
                find(i,j,vis,grid,m,n);
            }
        }
    }
    cout<<count<<endl;
    return count;
}