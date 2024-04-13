# Maximal Rectangle (Leetcode 85) #
# Problem Link: https://leetcode.com/problems/maximal-rectangle/description/

int max_rect_histogram(vector<int>& heights) {
    int n=heights.size();
    stack<int> st;
    heights.push_back(INT_MIN);
    int ans=0,tempAns=0;

    for(int i=0;i<=n;++i){
        while(!st.empty() && heights[i]<heights[st.top()]){
            int heigh=heights[st.top()];
            st.pop();
            int width=(i-(st.empty() ? 0 : st.top()+1));
            tempAns=heigh*width;
            ans=max(ans,tempAns);
        }

        st.push(i);
    }

    return ans;
}

int maximalRectangle(vector<vector<char>>& matrix) {
    int m=matrix.size();
    int n=matrix[0].size();

    vector<int> histogram(n,0);
    int max_area=0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]=='1'){
                histogram[j]++;
            }
            else{
                histogram[j]=0;
            }
        }
        
        int area=max_rect_histogram(histogram);
        max_area=max(max_area,area);
    }

    return max_area;;
}