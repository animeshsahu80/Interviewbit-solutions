string Solution::solve(string A) {
    queue<char> q;
    vector<int> hash(26,0);
    string res="";
    for(int i=0;i<A.size();i++){
        q.push(A[i]);
        hash[A[i]-'a']++;
        while(q.size()){
            if(hash[q.front()-'a']>1){
                q.pop();
            }
            else{
                res+=q.front();
                break;
            }
        }
        if(q.size()==0)
            res+='#';
    }
    return res;
}
