# Subarray Product Less Than K (Leetcode 713)#
# Problem Link: https://leetcode.com/problems/subarray-product-less-than-k/description/

 int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    if(k==0) return 0;
    int n=nums.size();
    int ans=0,i=0,j=0;
    long long prod = 0;
    while(j<n){
        if(prod==0){
            prod=nums[j];
        }
        else{
            prod*=nums[j];
        }

        while(prod >= k && i<=j){
            if(i==j){
                prod=0;
            }
            else{
                prod/=nums[i];
            }
            i++;
        }

        ans+=(j-i+1);
        ++j;
    }

    return ans;
}