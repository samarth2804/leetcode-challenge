# Length of Last Word (Leetcode 58) #
# Problem Link: https://leetcode.com/problems/length-of-last-word/description/

int lengthOfLastWord(string s) {
    stringstream ss(s);
    string temp1,temp2; 
    while(ss>>temp1){
        temp2=temp1;
    }

    return temp2.size();
}