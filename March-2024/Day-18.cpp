
# Minimum Number of Arrows to Burst Balloons (Leetcode - 452)#
Problem link: https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/

int findMinArrowShots(vector<vector<int>>& points) {
    int n=points.size();
    if(n<1) return 0;
    sort(points.begin(),points.end());
    int mini=points[0][1];
    int count=1;
    for(int i=1;i<n;++i){
        if(points[i][0] <= mini){
            mini=min(mini,points[i][1]);
        }
        else{
            mini=points[i][1];
            count++;
        }
    }

    return count;
}

