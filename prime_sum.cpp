bool isprime(int a){
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0)
        return 0;
    }
    return 1;
}


vector<int> Solution::primesum(int A) {
    int n=A;
    for(int i=2;i<n;i++){
        if(isprime(i)&&isprime(A-i))
            return {i,A-i};
    }
}
