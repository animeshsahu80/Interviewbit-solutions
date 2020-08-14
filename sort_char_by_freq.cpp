class Solution {
public:
    string frequencySort(string s) {
        string res="";
        map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        multimap<int, char, greater<int>> mul;
        for(auto c:mp){
            mul.insert(make_pair(c.second,c.first));
        }
        for(auto c:mul){
            int num=c.first;
            char x=c.second;
            while(num--){
                res+=x;
            }
        }
        return res;
    }
};