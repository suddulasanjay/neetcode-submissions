class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> appeared;
        for(int num : nums){
            if(appeared.count(num)){
                return true;
            }
            appeared.insert(num);
        }
        return false;
    }
};