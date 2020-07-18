int Solution::isPower(int A) {
    if(A==1)
        return 1;
    for(int i=2;i<=sqrt(A);i++){
        int temp=A;
        while(temp%i==0){
            temp=temp/i;
            if(temp==1)
                return true;
        }
    }
    return false;
    
}
