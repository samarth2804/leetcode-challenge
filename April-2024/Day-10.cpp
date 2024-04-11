# Reveal Cards In Increasing Order (Leetcode 950)#
# Problem Link: https://leetcode.com/problems/reveal-cards-in-increasing-order/description/

vector<int> deckRevealedIncreasing(vector<int>& deck) {
    int n=deck.size();
    sort(deck.begin(),deck.end());
    queue<int> q;
    for(int i=0;i<n;++i) q.push(i);
    vector<int> ans(n);
    for(int i=0;i<n-1;++i){
        ans[q.front()]=deck[i];
        q.pop();
        q.push(q.front());
        q.pop();
    }
    ans[q.front()]=deck[n-1];

    return ans;
}