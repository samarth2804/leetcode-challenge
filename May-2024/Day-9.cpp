// 3075. Maximize Happiness of Selected Children
// Problem Link: https://leetcode.com/problems/maximize-happiness-of-selected-children/description/

long long maximumHappinessSum(vector<int>& happiness, int k) {
    long long ans=0, temp=0;;
    sort(happiness.begin(),happiness.end(),greater<>());

    for(int i=0;i<k;++i){
        ans=(ans+max((long long)0,happiness[i]-temp));
        ++temp;
    }

    return ans;
}