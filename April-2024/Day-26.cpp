// Minimum Falling Path Sum II (Leetcode 1289)
// Problem Link: https://leetcode.com/problems/minimum-falling-path-sum-ii/
int help(int r,int c,vector<vector<int>>& grid, const int &n, vector<vector<int>>& dp){
    if(r==n) return 0;
    if(dp[r][c+1]!=-1) return dp[r][c+1];
    int ans=1e9;
    for(int i=0;i<n;++i){
        if(i==c) continue;
        ans=min(ans,grid[r][i]+help(r+1,i,grid,n,dp));
    }

    return dp[r][c+1]=ans;
}
int minFallingPathSum(vector<vector<int>>& grid) {
    int  n=grid.size();
    if(n==1) return grid[0][0];

    vector<vector<int>> dp(n,vector<int> (n+1,-1));
    return help(0,-1,grid,n,dp);
}