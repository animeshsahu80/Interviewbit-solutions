int Solution::colorful(int A) {
    vector<int> num;
    while(A){
        num.push_back(A%10);
        A=A/10;
    }
    reverse(num.begin(),num.end());
    int n=num.size();
    set <int> s;
    for(int i=0;i<n;i++){
        long long int prod=1;
        for(int j=i;j<n;j++){
            prod=prod*(long long int)num[j];
            if(s.find(prod)==s.end()){
                s.insert(prod);
            }
            else
                return 0;
        }
    }
    return 1;
}
    