bool is_vovel(char x){
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
        return true;
    }
    return false;
}

int Solution::solve(string A) {
    int l=A.size();
    int count=0;
    for(int i=0;i<l;i++){
       
        if(is_vovel(A[i])){
            count+=(A.size()-i)%10003;
        }
    }
    return count%10003;
    
}
