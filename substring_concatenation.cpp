vector<int> Solution::findSubstring(string A, const vector<string> &B) {
    map<string, int> mp1;
    for(auto st:B){
        mp1[st]++;
    }
    vector<int> res;
    int total=B[0].size()*B.size();
    int sub=B[0].size();
    int i=0;
    if(total>A.size())
        return res;
    while(i<=A.size()-total){
        string s=A.substr(i,total);
        map<string,int> mp2;
        int  k=0;
        int n=0;
        while(n<=total-sub){
            string temp=s.substr(n,sub);
            n+=sub;
            mp2[temp]++;
        }
        if(mp2==mp1)
            res.push_back(i);
        i++;
    }
    return res;
}
