
int numofpainter(vector<int>& C,long long int x){
    int ret=1;
    long new_sum=0;
    for(int i=0;i<C.size();i++){
        new_sum+=(long )C[i];
        if(new_sum>x){
            ret++;
            new_sum=(long) C[i];
        }
    }
    return ret;
}


int Solution::paint(int A, int B, vector<int> &C) {
    int num=A;
  
    long max_val=INT_MIN;
    
    long sum=0;
    for(int i=0;i<C.size();i++){
        sum+=(long )C[i];
        max_val=max(max_val,(long )C[i]);
    }
    long mid;
    long ans=0; 
    while(max_val<=sum){
        mid=(max_val)+ (sum-max_val)/2L;
        if(numofpainter(C,mid)<=num){
            sum=mid-1;
            ans=mid;
        }
        else{
            max_val=mid+1;
        }
    }
    return (int)( (ans*B)% 10000003);
}
