int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A[0]>B){
        return 0;
    }
    if(A[A.size()-1]<B){
        return A.size();
    }
    
    int s=0;
    int e=A.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(A[mid]==B)
            return mid;
        if(A[mid]>B){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return s;
    
}
