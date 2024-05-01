// Reverse Prefix of Word (Leetcode 2000)
// Problem Link:https://leetcode.com/problems/reverse-prefix-of-word/description/

string reversePrefix(string word, char ch) {
    int i=0, n=word.size();
    for(;i<n;++i){
        if(word[i]==ch){
            break;
        }
    }

    if(i==n) return word;
    int j=0;
    while(j<i){
        swap(word[i],word[j]);
        --i;
        ++j;
    }

    return word;
}