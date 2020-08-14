    class Solution {
    public:
        int lastStoneWeight(vector<int>& stones) {
         priority_queue<int> q;
            for(auto num:stones){
                q.push(num);
            }
            while(q.size()>1){
                int a=q.top();
                q.pop();
                int b=q.top();
                q.pop();
                int c=a-b;
                q.push(c);
            }
            int ans=q.top();
            return ans;
        }
    };