# Subarrays with K Different Integers (Leetcode 992) #
# Problem Link: https://leetcode.com/problems/subarrays-with-k-different-integers

int subarraysWithAtMostKDistinct(vector<int>& nums, int k){
    int n=nums.size();
    int i=0,j=0;
    int total=0,distinct=0;

    vector<int> v(n+1,0);
    while(j<n){
        if(v[nums[j]]++ ==0){
            ++distinct;
        }
        while(distinct > k){
            if(v[nums[i]]--==1){
                --distinct;
            }
            ++i;
        }
        total+=(j-i+1);
        ++j;
    }

    return total;
}

int subarraysWithKDistinct(vector<int>& nums, int k) {
    return subarraysWithAtMostKDistinct(nums,k)-subarraysWithAtMostKDistinct(nums,k-1);
}