class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        map<float,vector<int>> mp;
        for(int i=0;i<points.size();i++){
            float dist=sqrt(points[i][0]*points[i][0] + points[i][1]*points[i][1]);
            if(mp.find(dist)==mp.end()){
                mp[dist]={};
            }
            mp[dist].push_back(i);
        }
        priority_queue<float,vector<float>,greater<float>> q;
        for(auto point:mp){
            q.push(point.first);
        }
        vector<vector<int>> res;
        for(int i=0;i<K;i++){
            float p=q.top();
            q.pop();
            for(auto idx:mp[p]){
                
            res.push_back({points[idx][0],points[idx][1]});
            if(res.size()==K)
                break;
            }
            if(res.size()==K)
                break;
            
        }
        return res;
    }
};