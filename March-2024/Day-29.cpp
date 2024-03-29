# Count Subarrays Where Max Element Appears at Least K Times (Leetcode 2962) #
# Problem Link: https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/description/

long long countSubarrays(vector<int>& nums, int k) {
    long long n=nums.size();
    long long i=0,j=0,ans=0;
    unordered_map<int,long long> freq;
    int maxi=*max_element(nums.begin(),nums.end());

    while(j<n){
        freq[nums[j]]++;
        while(freq[maxi] >=k){
            freq[nums[i]]--;
            ++i;
        }
        ans+=(j-i+1);
        ++j;
    }

    ans=((n*(n+1))/2 )- ans;
    return ans;
}