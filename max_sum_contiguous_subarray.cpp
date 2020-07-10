int Solution::maxSubArray(const vector<int> &A) {
     int max_current = A[0];
    int max_global = A[0];
    for(int i = 1; i < A.size(); i++){
        max_current = max(A[i], max_current + A[i]);
        max_global = max(max_current, max_global);
    }
    return max_global;
}
