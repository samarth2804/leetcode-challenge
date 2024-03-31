# Count Subarrays With Fixed Bounds (Leetcode 2444) #
# Problem Link: https://leetcode.com/problems/count-subarrays-with-fixed-bounds/description/
long long countSubarrays(vector<int>& nums, int minK, int maxK) {
    if(minK>maxK) return 0; 
    long long n=nums.size(), ans=0, i=0,j=0,i1=-1, i2=-1;

    while(j<n){
        if(nums[j]==minK && nums[j]==maxK){
            i1=j;
            i2=j;
        }
        else if(nums[j]==minK){
            i1=j;
        }
        else if(nums[j]==maxK){
            i2=j;
        }
        else if(nums[j] < minK || nums[j] > maxK){
            i1=-1;
            i2=-1;
            i=j+1;
        }

        if(i1!=-1 && i2!=-1 && i<=j){
            ans+=(min(i1,i2)-i+1);
        }

        ++j;
    }

    return ans;
}