# Two Repeated Elements #
# Problem Link: https://www.geeksforgeeks.org/problems/two-repeated-elements-1587115621/1

vector<int> twoRepeated (int arr[], int N) {
    int i,x,y;
    int freq[N+1];
    vector<int>res;
    memset(freq,0,sizeof(freq));
    for(i=0;i<N+2;i++){
        freq[arr[i]]++;
        if(freq[arr[i]] >= 2)
            res.push_back(arr[i]);
    }
    return res;   
}