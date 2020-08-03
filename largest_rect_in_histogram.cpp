int Solution::largestRectangleArea(vector<int> &A) {
    vector<int> left;
    vector<int> right;
    
    stack<pair<int,int>> nsl;
    stack<pair<int,int>> nsr;
    int l=A.size();
    for(int i=l-1;i>=0;i--){
        if(nsr.size()==0){
            right.push_back(l);
        }
        else if(nsr.size()>0 && nsr.top().first<A[i]){
            right.push_back(nsr.top().second);
        }
        else if(nsr.size()>0 && nsr.top().first>=A[i]){
            while(nsr.size()>0&&nsr.top().first>=A[i]){
                nsr.pop();
            }
            if(nsr.size()==0)
                right.push_back(l);
            else
                right.push_back(nsr.top().second);
        }
        nsr.push(make_pair(A[i],i));
    }
    reverse(right.begin(),right.end());
    for(int i=0;i<l;i++){
        if(nsl.size()==0){
            left.push_back(-1);
        }
        else if(nsl.size()>0 && nsl.top().first<A[i]){
            left.push_back(nsl.top().second);
        }
        else if(nsl.size()>0 && nsl.top().first>=A[i]){
            while(nsl.size()>0&&nsl.top().first>=A[i]){
                nsl.pop();
            }
            if(nsl.size()==0){
                left.push_back(-1);
            }
            else{
                left.push_back(nsl.top().second);
            }
        }
        nsl.push(make_pair(A[i],i));
    }
    int ans=INT_MIN;
    for(int i=0;i<l;i++){
        ans=max(ans,A[i]*(right[i]-left[i]-1));
    }
    return ans;
}
