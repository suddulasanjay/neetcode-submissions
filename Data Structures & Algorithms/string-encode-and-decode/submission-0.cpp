class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(auto str : strs){
            res += to_string(str.size()) + '#' + str;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int m = s.size(), i = 0;
        while(i < m){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int n = stoi(s.substr(i, j - i));
            i = j + 1;
            res.push_back(s.substr(i, n));
            i = i + n;
        }
        return res;
    }
};
