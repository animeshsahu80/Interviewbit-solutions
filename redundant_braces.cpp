int Solution::braces(string A) {
    stack<char> st;
    for(int i=0;i<A.size();i++){
        if(A[i]==')'){
            int flag=0;
            while(st.size()>0 && st.top()!='('){
                if(st.top()=='/' || st.top()=='*' || st.top()=='-' || st.top()=='+' ){
                    flag=1;
                }
                st.pop();
            }
            st.pop();
            if(flag==0)
                return 1;
        }
        else
            st.push(A[i]);
    }
    return 0;
}
