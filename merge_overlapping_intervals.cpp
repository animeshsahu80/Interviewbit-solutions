/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool cmp(Interval a , Interval b)
{
    return a.start < b.start ; 
}
vector<Interval> Solution::merge(vector<Interval> &v) {
   
    vector<Interval> res;
    sort(v.begin(),v.end(),cmp);
     Interval curr=v[0];
    for(int i=1;i<v.size();i++){
        if(curr.end>=v[i].start){
            curr.start=min(curr.start,v[i].start);
            curr.end=max(curr.end,v[i].end);
        }
        else{
            res.push_back(curr);
            curr=v[i];
        }
    }
    res.push_back(curr);
    return res;
}
