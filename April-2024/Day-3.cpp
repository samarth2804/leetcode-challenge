# Word Search (Leetcode 79) #
# Problem Link: https://leetcode.com/problems/word-search/description/

bool find(int i,int j,vector<vector<char>>& board,int m,int n,string &word,int k,int l){
    if(k==l){
        return true;
    }

    board[i][j]='.';
    int dir[]={-1,0,1,0,-1};
    for(int p=0;p<4;++p){
        int ni=i+dir[p];
        int nj=j+dir[p+1];

        if(ni>=0 && ni<m && nj>=0 && nj<n && board[ni][nj]==word[k] && find(ni,nj,board,m,n,word,k+1,l)){
            board[i][j]=word[k-1];
            return true;
        }
    }
    board[i][j]=word[k-1];
    return false;
}

bool exist(vector<vector<char>>& board, string word) {
    int m=board.size(); 
    int n=board[0].size();
    int l=word.length();
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            if(board[i][j]==word[0] && find(i,j,board,m,n,word,1,l)){
                return true;
            }
        }
    }
    
    return false;
}