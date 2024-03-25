# Find All Duplicates in an Array (Leetcode 442) #
# Problem Link: https://leetcode.com/problems/find-all-duplicates-in-an-array/

 vector<int> findDuplicates(vector<int>& nums) {
       int n=nums.size();
       vector<int> ans;
        if(n<=1){
            return ans;
        }
        for(int i=0;i<n;++i){
            int index=(nums[i]-1)%n;
            nums[index]+=n;
        }

        for(int i=0;i<n;++i){
            if(((nums[i]-1)/n)>1){
                ans.push_back(i+1);
            }
        }
        return ans;
    }

/////////////////////////////////////////////////////////////////////////
    vector<int> findDuplicates(vector<int>& nums) {
       int n=nums.size();
       vector<int> ans;

        for(int i=0;i<n;++i){
            while(nums[i]!=(i+1) && nums[i]!=nums[nums[i]-1]){
                    swap(nums[i],nums[nums[i]-1]);
            }
        }

        for(int i=0;i<n;++i){
            if(nums[i]!=i+1){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }