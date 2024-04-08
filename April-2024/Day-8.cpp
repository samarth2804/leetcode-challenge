# Number of Students Unable to Eat Lunch (Leetcode 1700) #
# Problem Link: https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/description/

int countStudents(vector<int>& students, vector<int>& s) {
    int n=students.size();
    int circle=0,square=0;
    for(int i : students){
        if(i==0){
            ++circle;
        }
        else{
            ++square;
        }
    }
    for(int i=0;i<n;++i){
        if(s[i]==0){
            if(circle-- ==0){
                return n-i;
            }
        }
        else{
            if(square-- == 0){
                return n-i;
            }
        }
    }
    return 0;
}
