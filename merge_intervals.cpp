/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 
 static bool comp(Interval a,Interval b){
     return a.start<b.start;
 }
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
   Interval curr;
   intervals.push_back(newInterval);
   sort(intervals.begin(),intervals.end(),comp);
   vector<Interval> res;
   curr=intervals[0];
   for(int i=1;i<intervals.size();i++){
       if(curr.end>=intervals[i].start){
           curr.start=min(curr.start,intervals[i].start);
           curr.end=max(curr.end,intervals[i].end);
       }
       else{
           res.push_back(curr);
           curr=intervals[i];
       }
   }
   res.push_back(curr);
   return res;
}
