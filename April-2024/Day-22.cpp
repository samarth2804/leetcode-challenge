// Open the Lock(leetcode 752)
// Problem Link: https://leetcode.com/problems/open-the-lock/description/

int openLock(vector<string>& deadends, string target) {
    if(target=="0000") return 0;
    queue<string> q;
    unordered_set<string> dead(deadends.begin(),deadends.end());
    if(dead.find("0000")!=dead.end()) return -1;
    
    q.push("0000");
    dead.insert("0000");
    int turns=0;
    string temp,t1,t2;
    while(!q.empty()){
        int n=q.size();
        turns++;
        for(int i=0;i<n;++i){
            temp=q.front();
            q.pop();
            for(int j=0;j<4;++j){
                t1=t2=temp;
                if(t1[j]=='9'){
                    t1[j]='0';
                }
                else{
                    t1[j]=++t1[j];
                }

                if(t2[j]=='0'){
                    t2[j]='9';
                }
                else{
                    t2[j]=--t2[j];
                }

                if(t1==target || t2==target) return turns;
                if(dead.find(t1)==dead.end()){
                    dead.insert(t1);
                    q.push(t1);
                }

                if(dead.find(t2)==dead.end()){
                    dead.insert(t2);
                    q.push(t2);
                }
            }
        }
    }

    return -1;
}