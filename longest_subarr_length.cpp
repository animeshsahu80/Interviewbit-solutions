int Solution::solve(vector<int> &A) {
    map<int,int> mp;
    for(int i=0;i<A.size();i++){
        if(A[i]==0)
            A[i]=-1;
    }
    int sum=1;
    int curr=0;
    int ans=INT_MIN;
    for(int i=0;i<A.size();i++){
        curr+=A[i];
        if(curr==sum){
            ans=max(ans,i+1);
        }
        if(mp.find(curr)==mp.end()){
            mp[curr]=i;
        }
        if(mp.find(curr-sum)!=mp.end()){
            ans=max(ans,i-mp[curr-sum]);
        }
    }
    return ans;
}
