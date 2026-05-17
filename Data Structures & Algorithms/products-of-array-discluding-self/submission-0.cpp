class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        for(int i = 0; i < n; i++){
            int left = 1, right = 1;
            for(int j = 0; j < i; j++){
                left *= nums[j];
            }
            for(int j = i + 1; j < n; j++){
                right *= nums[j];
            }
            res.push_back(left * right);
        }
        return res;
    }
};
