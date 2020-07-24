string Solution::countAndSay(int A) {
    string s="1";
    while(--A){
        string ns="";
        for(int i=0;i<s.size();i++){
            int count=1;
            while(i+1<s.size() && s[i+1]==s[i]){
                i++;
                count++;
            }
            ns+= to_string(count) + s[i];
        }
        s=ns;
    }

    return s;
    
}



