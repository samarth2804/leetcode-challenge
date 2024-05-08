// 506. Relative Ranks
// Problem Link: https://leetcode.com/problems/relative-ranks/description/

vector<string> findRelativeRanks(vector<int>& score) {
    int n=score.size();
    priority_queue<pair<int,int>> pq;
    for(int i=0;i<n;++i){
        pq.push({score[i],i});
    }

    vector<string> ans(n);
    int temp=1;
    while(!pq.empty()){
        int ind=pq.top().second;
        pq.pop();
        if(temp==1){
            ans[ind]="Gold Medal";
        }
        else if(temp==2){
            ans[ind]="Silver Medal";
        } 
        else if(temp==3){
            ans[ind]="Bronze Medal";
        }
        else{
            ans[ind]=to_string(temp);
        }

        temp++;
    }

    return ans;
}