# Remove K Digits (leetcode 402) #
# Problem Link: https://leetcode.com/problems/remove-k-digits/description/

string removeKdigits(string num, int k) {
    stack<char> st;
    string ans="";
    int i=0;
    for(; num[i]!=0;++i){
        while(!st.empty() && k && st.top() > num[i]){
            st.pop();
            --k;
        }

        if(st.empty() && num[i]=='0'){
            continue;
        }
        st.push(num[i]);
    }

    while(!st.empty() && k--){
        st.pop();
    }

    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    if(ans.empty()){
        return "0";
    }

    reverse(ans.begin(),ans.end());
    return ans;
}