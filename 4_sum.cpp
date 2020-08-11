vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {
    set<vector<int>> s;
    sort(A.begin(),A.end());
    
    for(int i=0;i<A.size();i++){
        int first_sum=B-A[i];
        for(int j=i+1;j<A.size();j++){
            int sec_sum=first_sum-A[j];
            if(j+1<A.size()){
                int left=j+1;
                int right=A.size()-1;
                while(left<right){
                    if(A[left]+A[right]==sec_sum){
                        vector<int> temp={A[i],A[j],A[left],A[right]};
                        s.insert(temp);
                        left++;
                        right--;
                    }
                    else if(A[left]+A[right]<sec_sum){
                        left++;
                    }
                    else
                        right--;
                }
            }
        }
    }
    vector<vector<int>> res;
    
    for(auto vec:s){
        res.push_back(vec);
    }
    sort(res.begin(),res.end());
    return res;
}
