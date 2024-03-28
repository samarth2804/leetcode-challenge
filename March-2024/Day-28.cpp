# Length of Longest Subarray With at Most K Frequency (Leetcode 2958) #
# Problem Link: https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/

int maxSubarrayLength(vector<int>& nums, int k) {
    int n=nums.size();
    int i=0,j=0,ans=0;
    unordered_map<int,int> freq;

    while(j<n){
        freq[nums[j]]++;

        while(freq[nums[j]] > k){
            freq[nums[i]]--;
            i++;
        }

        ans=max(ans,j-i+1);
        ++j;
    }

    return ans;
}