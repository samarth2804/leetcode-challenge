# Task Scheduler (Leetcode - 621) #
# problem link: https://leetcode.com/problems/task-scheduler/ 


int leastInterval(vector<char>& tasks, int n) {
        int siz=tasks.size();
    if(n==0){return siz;}
    unordered_map<char,int> umap;
    for(auto task : tasks){
        umap[task]++;
    }

    int maxfreqOfTask=0;
    int taskHavingMaxFreq=0;

    for(auto it : umap){
        if(it.second > maxfreqOfTask){
            maxfreqOfTask=it.second;
            taskHavingMaxFreq=1;
        }
        else if(maxfreqOfTask==it.second){
            taskHavingMaxFreq++;
        }
    }

    int time=((n+1)*(maxfreqOfTask-1));
    time+=taskHavingMaxFreq;

    return max(siz,time);
}