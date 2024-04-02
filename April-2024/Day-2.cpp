# Isomorphic Strings (Leetcode 205) #
# Problem Link: https://leetcode.com/problems/isomorphic-strings/description/

bool isIsomorphic(string s, string t) {
    int n1=s.size();
    int n2=t.size();
    if(n1!=n2){
        return false;
    }

    vector<int> v1(256,-1);
    vector<int> v2(v1);

    for(int i=0;i<n1;++i){
        if(v1[s[i]]==-1 && v2[t[i]]==-1){
            v1[s[i]]=t[i];
            v2[t[i]]=s[i];
        }
        else if(v1[s[i]]!=t[i] || v2[t[i]]!=s[i]){
            return false;
        }
    }

    return true;
}