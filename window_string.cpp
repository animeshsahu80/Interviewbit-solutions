string Solution::minWindow(string A, string B) {
    map<char,int> orig;
    map<char,int> temp;
    for(int i=0;i<B.size();i++){
        orig[B[i]]++;
    }
    int slow=0;
    int fast=0;
    int n=A.size();
    string s="";
    int count=0;
    int len=INT_MAX;
    while(fast<n){
        if(orig.count(A[fast])){
            temp[A[fast]]++;
            
        }
        if(orig.count(A[fast]) && temp[A[fast]]==orig[A[fast]])
            count++;
        while(count==orig.size() && slow<=fast){
            
            if(fast-slow+1<len){
                len=fast-slow+1;
                s=A.substr(slow,len);
            }
            
            if(orig.count(A[slow])){
                temp[A[slow]]--;
            }
            if(orig.count(A[slow]) && temp[A[slow]]<orig[A[slow]]){
                count--;
            }
            slow++;
        }
        fast++;
    }
    return s;
}
