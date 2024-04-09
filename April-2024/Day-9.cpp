# Time Needed to Buy Tickets (Leetcode 2073) #
# Problem Link: https://leetcode.com/problems/time-needed-to-buy-tickets/description/
int timeRequiredToBuy(vector<int>& tickets, int k) {
    int time=tickets[k], n=tickets.size();
    for(int i=0;i<k;++i){
        time+=min(tickets[i],tickets[k]);
    }
    for(int i=k+1;i<n;++i){
        time+=min(tickets[i],tickets[k]-1);
    }

    return time;
}