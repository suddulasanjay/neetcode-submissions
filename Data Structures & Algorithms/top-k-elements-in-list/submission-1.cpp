class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int num : nums){
            mp[num]++;
        }
        vector<vector<int>> buckets(n + 1);
        for(auto [num, cnt] : mp){
            buckets[cnt].push_back(num);
        }
        vector<int> res;
        int i = n;
        while(i >= 0){
            if(!buckets[i].empty()){
                for(int num : buckets[i]){
                    res.push_back(num);
                    if(res.size() == k) break;
                }
                if(res.size() == k) break;
            }
            i--;
        }
        return res;
    }
};
