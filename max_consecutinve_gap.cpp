int Solution::maximumGap(const vector<int> &A) {
    int n=A.size();
    if(n<2)
    return 0;
    int min_val=INT_MAX;
    int max_val=INT_MIN;
    for(int i=0;i<n;i++){
        min_val=min(min_val,A[i]);
        max_val=max(max_val,A[i]);
    }
    int interval=ceil((double)(max_val-min_val)/(double)(n-1));
    vector<int> bucket_min(n-1,INT_MAX);
    vector<int> bucket_max(n-1,INT_MIN);
    for(int i=0;i<n;i++){
        if(A[i]==min_val||A[i]==max_val)
            continue;
        int index=(A[i]-min_val)/interval;
        bucket_min[index]=min(bucket_min[index],A[i]);
        bucket_max[index]=max(bucket_max[index],A[i]);
    }
    int prev=min_val;
    int ans=INT_MIN;
    for(int i=0;i<bucket_min.size();i++){
        if(bucket_min[i]==INT_MAX || bucket_max[i]==INT_MIN)
            continue;
        ans=max(bucket_min[i]-prev,ans);
        prev=bucket_max[i];
    }
    ans=max(ans,max_val-prev);
    return ans;
}
