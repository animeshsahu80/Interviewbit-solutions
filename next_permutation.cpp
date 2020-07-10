vector<int> Solution::nextPermutation(vector<int> &A) {
    int n=A.size();
    int index=0;
    if(n==1)
        return A;
    if(A.size()==2){
        int p=A[0];
        A[0]=A[1];
        A[1]=p;
        return A;
    }
    for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            index=i;
            break;
        }
    }
    if(index==0){
        sort(A.begin(),A.end());
        return A;
    }
    int num=A[index];
    int diff=INT_MAX;
    int new_index;
    for(int i=index+1;i<A.size();i++){
        if(A[i]-num<diff && A[i]-num>0){
            diff=A[i]-num;
            new_index=i;
        }
    }
    int temp=A[index];
    A[index]=A[new_index];
    A[new_index]=temp;
    int s=index+1;
    int e=A.size()-1;
    while(s<e){
        int t=A[s];
        A[s]=A[e];
        A[e]=t;
        s++;
        e--;
    }
    return A;
}
