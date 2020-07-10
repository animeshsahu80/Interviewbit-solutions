void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int r=A.size();
    int c=A[0].size();
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(j>i){
                int temp=A[i][j];
                A[i][j]=A[j][i];
                A[j][i]=temp;
            }
        }
    }
    for(int i=0;i<r;i++){
            int s=0;
            int e=A.size()-1;
            while(s<e){
                int t=A[i][s];
                A[i][s]=A[i][e];
                A[i][e]=t;
                s++;
                e--;
            }
    }
    return;
}
