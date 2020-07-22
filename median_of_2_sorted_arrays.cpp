double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A.size()>B.size()){
        return findMedianSortedArrays(B,A);
    }
    int x=A.size();
    int y=B.size();
    int low=0;
    int high=x;
    while(low<=high){
        int partx= (low+high)/2;
        int party= (x+y+1)/2 - partx;
        
        int max_x;
        if(partx==0){
            max_x=INT_MIN;
        }
        else{
            max_x=A[partx-1];
        }
        int min_x;
        if(partx==x){
            min_x=INT_MAX;
        }
        else{
            min_x=A[partx];
        }
        int max_y;
        if(party==0){
            max_y=INT_MIN;
        }
        else{
            max_y=B[party-1];
        }
        int min_y;
        if(party==y){
            min_y=INT_MAX;
        }
        else{
            min_y=B[party];
        }
        if(max_x<=min_y && min_x>=max_y){
            if((x+y)%2==0){
                return double((max(max_x,max_y) + min(min_x,min_y))/2.0);
            }
            else{
                return double(max(max_x,max_y));
            }
        }
        else if(max_x>min_y){
            high=partx-1;
        }   
        else{
            low=partx+1;
        }
        
    }
    
    
}
