vector<int> Solution::findPerm(const string A, int B) {
    stack <int> s;
    vector<int> res;
    int n=A.size();
    for(int i=0;i<n;i++){
        s.push(i+1);
        if(A[i]=='I'){
            while(s.size()>0){
                int num=s.top();
                res.push_back(num);
                s.pop();
            }
        }
    }
    s.push(n+1);
    while(s.size()>0){
        int temp=s.top();
        res.push_back(temp);
        s.pop();
    }
    return res;
}
