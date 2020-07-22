    
    int findstart(const vector<int> &A, int B){
        int index=-1;
        int start=0;
        int end=A.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(A[mid]>=B){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            if(A[mid]==B){
                index=mid;
            }
        }
        return index;
    }
    int findend(const vector<int> &A, int B){
        int index=-1;
        int start=0;
        int end=A.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(A[mid]<=B){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            if(A[mid]==B){
                index=mid;
            }
        }
        return index;
    }
    
    
    
    vector<int> Solution::searchRange(const vector<int> &A, int B) {
        int start=findstart(A,B);
        int end=findend(A,B);
        return {start,end};
    }
