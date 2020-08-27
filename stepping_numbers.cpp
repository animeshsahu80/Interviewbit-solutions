vector<int> Solution::stepnum(int A, int B) {
    vector<int> ans;
    if(A==0)
        ans.push_back(0);
    queue<int> q;
    for(int i=1;i<=9;i++){
        q.push(i);
    }
    while(q.front()<=B){
        int num=q.front();
        q.pop();
        if(num>=A)
            ans.push_back(num);
        int lastd=num%10;
        if(lastd>0)
            q.push(num*10 + (lastd-1));
        if(lastd<9)
            q.push(num*10 + (lastd+1));
    }
    sort(ans.begin(),ans.end());
    return ans;
}
