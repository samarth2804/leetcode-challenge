# Make The String Great (Leetcode  1544) #
Problem Link: https://leetcode.com/problems/make-the-string-great/description/

string makeGood(string s) {
    int n=s.size(), i=0;
    string ans="";

    while(i<n){
        if(ans.empty() || abs((int)s[i]-ans.back()) != 32){
            ans+=s[i];
        }
        else{
            ans.pop_back();
        }

        ++i;
    }

    return ans;
}