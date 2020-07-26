string Solution::addBinary(string A, string B) {
    int a=A.size()-1;
    int b=B.size()-1;

    string res="";
    int carry=0;
   while(a>=0 || b>=0){
       int sum=carry;
       if(a>=0){
           sum+=A[a]-'0';
           a--;
       }
       if(b>=0){
           sum+=B[b]-'0';
           b--;
       }

       res+= to_string(sum%2);
       carry=sum/2;
       
    }
    if(carry){
        res+=to_string(1);
    }
    reverse(res.begin(),res.end());
    return res;
}
