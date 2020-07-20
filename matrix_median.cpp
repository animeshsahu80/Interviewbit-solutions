int Solution::findMedian(vector<vector<int> > &A) {
    int min_val=INT_MAX;
    int max_val=INT_MIN;
    for(int i=0;i<A.size();i++){
        if(A[i][0]<min_val){
            min_val=A[i][0];
        }
        if(A[i][A[0].size()-1]>max_val){
            max_val=A[i][A[0].size()-1];
        }
    }
    int r=A.size();
    int c=A[0].size();
    int count;
    int n=(r*c+1)/2;
    
    while(min_val<max_val){
        int mid=min_val + (max_val-min_val)/2;
        count=0;
        for(int i=0;i<r;i++){
            count+=upper_bound(A[i].begin(),A[i].end(),mid) - A[i].begin();
        }
        if(count<n){
            min_val=mid+1;
        }
        else{
            max_val=mid;
        }
    }
    return max_val;
}