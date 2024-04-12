# Trapping Rain Water (Leetcode 42) #
# Problem Link: https://leetcode.com/problems/trapping-rain-water/description/

class Solution {
public:
    int trap(vector<int>& height) {
////////////////best approach-using two pointer///////////////////////////////////////////////////////////////
     int n=height.size();
    
     int leftMaximum=height[0], rightMaximum=height[n-1];
     long long int trapped_water=0;
     int i=1, j=n-2;
     while(i<=j){
         if(leftMaximum<=rightMaximum){
             if(height[i]<leftMaximum){
                trapped_water+=(leftMaximum-height[i]);
             }
             else{
                 leftMaximum=height[i];
             }
             ++i;
         }
         else{
            if(height[j]<rightMaximum){
                trapped_water+=(rightMaximum-height[j]);
             }
             else{
                 rightMaximum=height[j];
             }
             --j;
         }
     }
     return trapped_water;
    }
//////////////////////one of the efficient approach/////////////////////////////////////////////
        // int n=height.size();
        // vector<int> pre(n);
        // vector<int> post(n);

        // int left_maxi=0;
        // for(int i=0;i<n;++i){
        //     left_maxi=max(left_maxi,height[i]);
        //     pre[i]=left_maxi;
        // }

        // int right_maxi=0;
        // for(int i=n-1;i>=0;--i){
        //     right_maxi=max(right_maxi,height[i]);
        //     post[i]=right_maxi;
        // }

        // int trapped_water=0;
        // for(int i=0;i<n;++i){
        //     trapped_water+=(min(pre[i],post[i])-height[i]);
        // }

        // return trapped_water;
    //}
};