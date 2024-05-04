// Boats to Save People (Leetcode 881)
// Problem Link: https://leetcode.com/problems/boats-to-save-people/description/

int numRescueBoats(vector<int>& people, int limit) {
    int n=people.size();
    sort(people.begin(),people.end());
    int i=0,j=n-1;
    int ans=0;
    while(i<=j){
        ans++;
        if(i==j){
            break;
        }

        if(people[i]+people[j] > limit){
            --j;
        }
        else{
            ++i;
            --j;
        }
    }

    return ans;
}