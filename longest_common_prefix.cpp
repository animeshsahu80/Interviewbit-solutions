string Solution::longestCommonPrefix(vector<string> &A) {

    string s="";
    int index=0;
    for(auto c:A[0]){
        for(int i=1;i<A.size();i++){
            if(index>=A[i].size() || c!=A[i][index]){
                return s;
            }
            
        }
        s+=c;
            index++;
    }
    return s;
    
}
