class Solution {
public:
    

    struct comp { 
    constexpr bool operator()( 
        pair<int, int> const& a, 
        pair<int, int> const& b) 
        const noexcept 
    { 
        return a.second < b.second; 
    } 
}; 
  
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> freq;
        priority_queue<pair<int,int>, vector<pair<int,int>>, comp> q;
        for(auto num:nums){
            freq[num]++;
        }
        for(auto num:freq){
            q.push(num);
        }
        vector<int> res;
        while(k--){
            res.push_back(q.top().first);
            q.pop();
        }
        return res;
    }
    
};