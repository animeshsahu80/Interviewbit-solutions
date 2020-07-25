int Solution::isNumber(const string A) {
    string s=A;
    while(s[0]==' '){
        s.erase(s.begin());
    }
    reverse(s.begin(),s.end());
    while(s[0]==' '){
        s.erase(s.begin());
    }
    reverse(s.begin(),s.end());
    int l=s.size();
  
    int numseen=0;
    int dotseen=0;
    int eseen=0;
    for(int i=0;i<l;i++){
        if(s[i]<='9' && s[i]>='0'){
            numseen=1;
        }
        else if(s[i]=='e'){
            if(!numseen || eseen || s[i-1]=='.')
                return 0;
            eseen=1;
            numseen=0;
        }
        else if(s[i]=='.'){
            if(dotseen || eseen || i==l-1)
                return 0;
            dotseen=1;
        }
        else if(s[i]=='+' || s[i]=='-'){
            if(i!=0 && s[i-1]!='e')
                return 0;
        }
        else 
            return 0;
    }
    return numseen;
}
