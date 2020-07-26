int Solution::romanToInt(string A) {
    map<char, int> mp;
    mp['I']=1;
    mp['V']=5;
    mp['X']=10;
    mp['L']=50;
    mp['C']=100;
    mp['D']=500;
    mp['M']=1000;
    int res=0;
    for(int i=0;i<A.size();i++){
        if(i>0 && mp[A[i]]>mp[A[i-1]]){
            res+=mp[A[i]] - 2*mp[A[i-1]]; 
        }
        else{
            res+=mp[A[i]];
        }
    }
    return res;
}
