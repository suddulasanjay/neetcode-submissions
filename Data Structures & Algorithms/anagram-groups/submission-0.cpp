class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(auto str : strs){
            vector<int> freq(26);
            for(char ch : str){
                freq[ch - 'a']++;
            }
            string curr = "";
            for(int num : freq){
                curr += ('0' + num);
            }
            mp[curr].push_back(str);
        }
        vector<vector<string>> res;
        for(auto [str, vec] : mp){
            res.push_back(vec);
        }
        return res;
    }
};
