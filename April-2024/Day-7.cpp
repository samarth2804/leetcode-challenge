# 678. Valid Parenthesis String (Leetcode 678) #
# Problem Link: https://leetcode.com/problems/valid-parenthesis-string/

bool checkValidString(string s) {
    int openingMax=0,openingMin=0;

    for(char c : s){
        if(c =='('){
            openingMax++;
            openingMin++;
        }
        else if(c==')'){
            openingMax--;
            openingMin--;
        }
        else{
            openingMax++;
            openingMin--;
        }

        if(openingMax<0){
            return false;
        }

        if(openingMin<0){
            openingMin=0;
        }
    }

    return openingMin==0;
}