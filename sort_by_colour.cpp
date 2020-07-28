void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int start=0;
    int end=A.size()-1;
    int index=0;
    while(index<=end && start<end){
        if(A[index]==0){
            A[index]=A[start];
            A[start]=0;
            index++;
            start++;
        }
        else if(A[index]==2){
            A[index]=A[end];
            A[end]=2;
            end--;
     
        }
        else
            index++;
    }
    return;
}
