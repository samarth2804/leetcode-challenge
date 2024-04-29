// Minimum Number of Operations to Make Array XOR Equal to K (Leetcode 2997)
// Problem Link: https://leetcode.com/problems/minimum-number-of-operations-to-make-array-xor-equal-to-k/
 
int minOperations(vector<int>& nums, int k) {
    int n=nums.size();
    int xr=0;
    for(int i=0;i<n;++i){
        xr^=nums[i];
    }

    int count=0;
    for(int i=0;i<32;++i){
        int temp=(1<<i);
        if((temp & xr) != (temp & k)){
            count++;
        }
    }

    return count;
}