string Solution::convert(string A, int B) {
    vector<string> res(B,"");
    if(B==1)
        return A;
    bool inc=false;
    bool dec=true;
    int pos=0;
    for(int i=0;i<A.size();i++){
           if(pos==0){
               dec=true;
               inc=false;
           }
           if(pos==B-1){
               dec=false;
               inc=true;
           }
           res[pos]+=A[i];
           if(inc){
               pos--;
           }
           if(dec)
            pos++;
    }
   string ans;
    for(auto st:res){
        ans+=st;
    }
    return ans;
}
