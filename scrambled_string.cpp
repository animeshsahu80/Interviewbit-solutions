
int solve(string a,string b,map<string,int>& mem){
    if(a==b)
        return 1;
    if(a.size()<=1)
        return 0;
    int flag=0;
    int n=a.size();
    string key=a+'_'+b;
    if(mem.find(key)!=mem.end())
        return mem[key];
    for(int i=1;i<=n-1;i++){
        int p=solve(a.substr(0,i),b.substr(n-i,i),mem);
        int q=solve(a.substr(i,n-i),b.substr(0,n-i),mem);
        int r=solve(a.substr(0,i),b.substr(0,i),mem);
        int s=solve(a.substr(i,n-i),b.substr(i,n-i),mem);
        if(p&&q || r&&s){
            flag=1;
            break;
        }
    }
    return mem[key]=flag;
}

int Solution::isScramble(const string A, const string B) {
    string a=A;
    string b=B;
    if(a.size()!=b.size())
        return 0;
    map<string,int> mem;
    int ans=solve(a,b,mem);

    return ans;
}
