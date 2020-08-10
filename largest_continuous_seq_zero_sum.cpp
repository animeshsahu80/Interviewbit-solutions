vector<int> Solution::lszero(vector<int> &A) {
    map<int,int> mp;
    int sum=0;

    int left=0;
    int right=0;
    int max_len=0;
    for(int i=0;i<A.size();i++){
        sum+=A[i];
        if(sum==0){
            if(i+1>max_len){
            max_len=i+1;
            left=0;
            right=i;
            }
        }
        if(A[i]==0 && left==0 && right==0){
            max_len=1;
            left=i;
            right=i;
        }
        if(mp.find(sum)!=mp.end()){
            if(i-mp[sum]>max_len){
            max_len=i-mp[sum];
            left=mp[sum]+1;
            right=i;
            }
        }
        else{
            mp[sum]=i;
        }
    }
    vector<int>res;
    if(left==0&&right==0&& A[0]!=0)
        return res;
    for(int i=left;i<=right;i++){
        res.push_back(A[i]);
    }
    return res;
}
