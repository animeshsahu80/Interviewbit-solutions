int Solution::lengthOfLastWord(const string A) {
    int l=A.size();
    int count=0;
    while(A[l-1]==' '){
        l--;
    }
    for(int i=l-1;i>=0;i--){
        if(A[i]==' '){
            break;
        }
        count++;
    }
    return count;
}
