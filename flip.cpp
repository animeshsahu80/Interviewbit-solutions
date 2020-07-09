vector<int> Solution::flip(string A) {
    int l;
    int r;
    int ltemp=0;
    int max_c=INT_MIN;
    int count=0;
    int le=0;

    for(int i=0;i<A.size();i++){
        if(A[i]=='0')
            count++;
        else{
            le++;
            count--;
        }
        if(count>max_c){
            max_c=count;
            l=ltemp;
            r=i;
        }
        if(count<0){
            ltemp=i+1;
            count=0;
        }
    }
    if(le==A.size()){
        return {};
    }
    return {l+1,r+1};
}
