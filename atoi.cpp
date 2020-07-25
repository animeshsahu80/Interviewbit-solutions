int Solution::atoi(const string A) {
    string s=A;
    int i=0;
    while(s[0]==' '){
        s.erase(s.begin());

    }
    int sign=1;
    if(s[0]=='+' || s[0]=='-'){
        if(s[0]=='-')
            sign=-1;
        s.erase(s.begin());
    }
    i=0;
    string ans="";
    while(s[i]>='0' && s[i]<='9'&& i<s.size()){
        ans+=s[i];
        i++;
    }
    long long int num=0;
    int l=ans.size();
    for(int j=0;j<l;j++){
        num= num*10 + ans[j]-'0';
        if(num*sign > INT_MAX)
            return INT_MAX;
        if(num*sign < INT_MIN)
            return INT_MIN;
    }
    return (int)num*sign;
    
}
