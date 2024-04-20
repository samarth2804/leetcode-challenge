# Find All Groups of Farmland (Leetcode 1992) #
# Problem Link: https://leetcode.com/problems/find-all-groups-of-farmland/

vector<vector<int>> findFarmland(vector<vector<int>>& land) {
    int m=land.size(), n=land[0].size();
    vector<vector<int>> ans;

    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            if(land[i][j]==1 && ((i==m-1) || land[i+1][j]==0) && ((j==n-1) || land[i][j+1]==0)){
                int r=i,c=j;
                while(r>=0 && land[r][j]){
                    r--;
                }
                while(c>=0 && land[i][c]){
                    c--;
                }
                vector<int> temp={r+1,c+1, i,j};
                ans.push_back(temp);
            }
        }
    }

    return ans;
}