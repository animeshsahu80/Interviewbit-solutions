int Solution::evalRPN(vector<string> &A) {
    stack<int> st;
    for(int i=0;i<A.size();i++){
        if(A[i]=="+"|| A[i]=="/" || A[i]=="-" || A[i]=="*"){
            int num1=st.top();
            st.pop();
            int num2=st.top();
            st.pop();
            if(A[i]=="+")
                st.push(num2+num1);
            else if(A[i]=="-")
                st.push(num2-num1);
            else if(A[i]=="*")
                st.push(num2*num1);
            else
                st.push(num2/num1);
        }
        else
            st.push(stoi(A[i]));
    }
    return st.top();
}
