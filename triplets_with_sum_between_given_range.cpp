int Solution::solve(vector<string> &A) {
    vector<double> win;
    win.push_back(stod(A[0]));
    win.push_back(stod(A[1]));
    win.push_back(stod(A[2]));
    double sum=win[0]+win[1]+win[2];
    sort(win.begin(),win.end());
    if(A.size()<=3){
        if(sum>1 && sum<2)
            return 1;
        else
            return 0;
    }
    for(int i=3;i<A.size();i++){
        sort(win.begin(),win.end());
        if(sum>1 && sum<2)
            return 1;
        else{
            if(sum<1){
                sum-=win[0];
                win[0]=stod(A[i]);
                sum+=win[0];
            }
            else{
                sum-=win[2];
                win[2]=stod(A[i]);
                sum+=win[2];
            }
        }
    }
    if(sum>1 && sum<2)
        return 1;
    return 0;
}
    