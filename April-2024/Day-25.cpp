// Maximum sum of hour glass
// Problem Link: https://www.geeksforgeeks.org/problems/maximum-sum-of-hour-glass3842/1

int findMaxSum(int n, int m, vector<vector<int>> mat) {
    if(n<3 || m<3) return -1;
    int ans=-1;
    
    for(int i=2;i<n;++i){
        int sum=mat[i-1][1];
        for(int j=0;j<3;++j){
            sum+=mat[i][j]+mat[i-2][j];
        }
        ans=max(ans,sum);
        
        for(int j=3;j<m;++j){
            sum+=(mat[i][j]+mat[i-2][j]+mat[i-1][j-1]-mat[i][j-3]-mat[i-2][j-3]-mat[i-1][j-2]);
            ans=max(ans,sum);
        }
    }
    
    return ans;
}