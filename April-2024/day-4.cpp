# Maximum Nesting Depth of the Parentheses (Leetcode 1614) #
# Problem Link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/

int maxDepth(string s) {
    int maxi=0,opening=0;

    for(int i=0;s[i]!=0;++i){
        if(s[i]=='('){
            ++opening;
            maxi=max(maxi,opening);
        }
        else if(s[i]==')'){
            --opening;
        }
    }

    return maxi;
}