int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A.size()==1)
        return 1;
    int i=2;
    for(int j=2;j<A.size();j++){
        if(A[i-2]!=A[j]){
            A[i]=A[j];         
            i++;
        }
    }
    return i;
    
}
