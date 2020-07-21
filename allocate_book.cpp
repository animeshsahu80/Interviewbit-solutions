
int students(vector<int>& A,int num){
    int ret=1;
    int sum=0;
    for(int i=0;i<A.size();i++){
        sum+=A[i];
        if(sum>num){
            ret++;
            sum=A[i];
        }
    }
    return ret;
}

int Solution::books(vector<int> &A, int B) {
    int max_val=INT_MIN;
    int sum=0;
    if(B>A.size())
        return -1;
    for(int i=0;i<A.size();i++){
        max_val=max(max_val,A[i]);
        sum+=A[i];
    }
    int ans=0;
    int mid;
    while(max_val<=sum){
        mid=max_val + (sum-max_val)/2;
        if(students(A,mid)<=B){
            ans=mid;
            sum=mid-1;
        }
        else{
            max_val=mid+1;
        }
    }
    return ans;
}
