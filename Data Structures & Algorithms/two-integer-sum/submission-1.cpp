class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> idxMap;
        for(int i = 0; i < n; i++){
            idxMap.push_back({nums[i], i});
        }
        sort(idxMap.begin(), idxMap.end());
        int l = 0, h = n - 1;
        while(l < h){
            // sum found
            if(idxMap[l].first + idxMap[h].first == target){
                if(idxMap[l].second < idxMap[h].second){
                    return {idxMap[l].second, idxMap[h].second};
                }
                else{
                    return {idxMap[h].second, idxMap[l].second};
                }
            }
            // not found
            if(idxMap[l].first + idxMap[h].first < target){
                // sum is lower
                l++;
            }
            else{
                // sum is higher
                h--;
            }
        }
        return {-1, -1};
    }
};
