# First Missing Positive (Leetcode 41)#
# Problem Link: https://leetcode.com/problems/first-missing-positive/description

int firstMissingPositive(vector<int>& nums) {
    int n=nums.size();
    for(int i=0;i<n;++i){
        while(nums[i]!=i+1 && nums[i]<=n && nums[i]>0){
            if(nums[nums[i]-1]==nums[i]){
                break;
            }
            swap(nums[i],nums[nums[i]-1]);
        }
    }

    for(int i=0;i<n;++i){
        if(nums[i]!=i+1){
            return i+1;
        }
    }

    return n+1;
}