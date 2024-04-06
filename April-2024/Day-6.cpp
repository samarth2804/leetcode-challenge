# Minimum Remove to Make Valid Parentheses(Leetcode 1249) #
# Problem Link: https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/
string minRemoveToMakeValid(string s) {
    vector<int> v1,v2;
    int opening=0;

    for(int i=0;s[i]!=0;++i){
        if(s[i]=='('){
            opening++;
            v1.push_back(i);
        }
        else if(s[i]==')'){
            if(opening >0){
                v1.pop_back();
                opening--;
            }
            else{
                v2.push_back(i);
            }
        }
    }

    string ans="";
    int n1=v1.size(),n2=v2.size(), j=0,k=0;
    for(int i=0;s[i]!=0;++i){
        if(s[i]=='(' && j<n1 && v1[j]==i){
            j++;
            continue;
        }
        else if(s[i]==')' && k<n2 && v2[k]==i){
            k++;
            continue;
        }
        ans+=s[i];
    }

    return ans;
}