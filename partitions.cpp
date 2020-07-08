int Solution::solve(int n, vector<int> &B) {
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=B[i];
    }
    if(sum%3!=0)
        return 0;
    sum=sum/3;
    int sub=0;
    vector<int> end(n,0);
    for(int i=n-1;i>=0;i--){
        sub+=B[i];
        if(sub==sum){
            end[i]=1;
        }
    }
    for(int i=n-2;i>=0;i--){
        end[i]+=end[i+1];
    }
    
    sub=0;
    int ans=0;
    for(int i=0;i<n-2;i++){
        sub+=B[i];
        if(sub==sum){
            ans+=end[i+2];
        }
    }
    return ans;
}
