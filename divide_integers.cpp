int Solution::divide(int A, int B) {
    if(A==INT_MIN && B==-1)
        return INT_MAX;
    int a=abs(A);
    int b=abs(B);
    int res=0;
    while(a-b>=0){
        int x=0;
        while(a - (b<<1<<x)>=0){
            x++;
        }
        res+=1<<x;
        a-=b<<x;
    }
    if(A>=INT_MAX&&B==1)
        return INT_MAX;
    if(A>=0&& B>=0 || A<=0&& B<=0)
        return res;
    else
        return -1*res;
}
