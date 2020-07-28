void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int a=A.size()-1;
    int b=B.size()-1;
    for(int i=0;i<=b;i++){
        A.push_back(0);
    }
    int k=a+b+1;
    while(a>=0 && b>=0){
        if(A[a]>B[b]){
            A[k]=A[a];
            a--;
            k--;
        }
        else{
            A[k]=B[b];
            b--;
            k--;
        }
    }
    while(a>=0){
        A[k]=A[a];
        a--;
        k--;
    }
    while(b>=0){
        A[k]=B[b];
        b--;
        k--;
    }
    return ;
}
