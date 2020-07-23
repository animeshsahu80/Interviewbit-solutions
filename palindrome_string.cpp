int Solution::isPalindrome(string A) {
    int start=0;
    int end=A.size()-1;
    while(start<=end){
        if(!isalnum(A[start])){
            start++;
            continue;
        }
        if(!isalnum(A[end])){
            end--;
            continue;
        }
        if(tolower(A[start])!=tolower(A[end])){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
