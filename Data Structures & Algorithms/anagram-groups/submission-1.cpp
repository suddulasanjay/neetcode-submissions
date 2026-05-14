class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(auto str : strs){
            string curr = str;
            sort(curr.begin(), curr.end());
            mp[curr].push_back(str);
        }
        vector<vector<string>> res;
        for(auto [str, vec] : mp){
            res.push_back(vec);
        }
        return res;
    }
};
