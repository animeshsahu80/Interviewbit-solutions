int Solution::isPalindrome(int A) {
    string a=to_string(A);
    int s=0;
    int e=a.size()-1;
    while(s<e){
        if(a[s]!=a[e])
            return 0;
            s++;
            e--;
    }
    return 1;
}
