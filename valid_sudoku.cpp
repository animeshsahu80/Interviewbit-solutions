int Solution::isValidSudoku(const vector<string> &A) {
    unordered_set<string> s;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            char c=A[i][j];
            if(c!='.'){
            string s1="row"+to_string(i)+c;
            string s2="col"+ to_string(j)+c;
            string s3="box"+to_string(i/3) + to_string(j/3)+c;
            if(s.find(s1)!=s.end() || s.find(s2)!=s.end() || s.find(s3)!=s.end())
                return 0;
            else{
            s.insert(s1);
            s.insert(s2);
            s.insert(s3);
            }
            }
        }
    }
    return 1;
}
