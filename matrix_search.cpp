
int findrow(vector<vector<int> > &A, int B){
    int s=0;
    int e=A.size()-1;
    int mid;
    while(s<e){
        mid=s + (e-s)/2;
        if(A[mid][0]==B)
            return mid;
        if(A[mid][0]>B){
            e=mid-1;
        }
        else
            s=mid+1;
    }
    if(B<A[e][0])
        return e-1;
    else
        return e;
}

int Solution::searchMatrix(vector<vector<int> > &A, int B) {
     if(B < A[0][0] || B>A[A.size()-1][A[0].size()-1])
        return 0;
    int row=findrow(A,B);
    int l=0;
    int r=A[0].size()-1;
    int mid;
   
    while(l<=r){
        mid=l + (r-l)/2;
        if(A[row][mid]==B)
            return 1;
        if(A[row][mid]>B){
            r=mid-1;
        }
        else
            l=mid+1;
    }
    return 0;
}
