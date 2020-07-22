int Solution::search(const vector<int> &A, int B) {
    int start=0;
    int end=A.size()-1;
    int mid;
    while(start<=end){
        mid=start + (end-start)/2;
        if(A[mid]==B){
            return mid;
        }
        if(A[start]< A[mid]){
            if(A[start]<=B && A[mid]>=B){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        else{
            if(A[mid]<=B && A[end]>=B){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;
}
