string Solution::simplifyPath(string A) {
    stack<string> st;
    for(int i=0;i<A.size();i++){
        if(A[i]=='/')
            continue;
        else{
            string s="";
            while(i<A.size() && A[i]!='/'){
                s+=A[i];
                i++;
            }
            if(s=="."){
                continue;
            }
            else if(s==".."){
                if(st.size())
                    st.pop();
            }
            else 
                st.push(s);
        }
    }
    if(st.size()==0)
        return "/";
    string ans="";
    while(st.size()){
        string temp=st.top();
        reverse(temp.begin(),temp.end());
        ans+=temp;
        ans+='/';
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
