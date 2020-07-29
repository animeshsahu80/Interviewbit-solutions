
int Solution::diffPossible(vector<int> &A, int k) {
    int ans=0;
    int low=0;
    int high=1;
    while(low<high&& high<A.size() && low<A.size()){
        if(A[high]-A[low]==k)
            return 1;
        else if(A[high]-A[low]<k)
            high++;
        else
         low++;
        if(low==high)
            high++;
    }
    return ans;
}
