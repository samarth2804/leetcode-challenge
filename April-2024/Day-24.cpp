// N-th Tribonacci Number (Leetcode 1137)
// Problem Link: https://leetcode.com/problems/n-th-tribonacci-number/description/

int tribonacci(int n) {
    if(n<=1) return n;
    if(n==2) return 1;

    int prev3=0,prev2=1,prev1=1,curr;

    for(int i=2;i<n;++i){
        curr=prev3+prev2+prev1;
        prev3=prev2;
        prev2=prev1;
        prev1=curr;
    }

    return curr;
}