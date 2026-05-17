class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixProduct(n, 1), suffixProduct(n, 1), res;
        for(int i = 0; i < n; i++){
            if(i > 0){
                prefixProduct[i] *= (prefixProduct[i - 1] * nums[i - 1]);
            }
        }
        for(int i = n - 1; i >= 0; i--){
            if(i + 1 < n){
                suffixProduct[i] *= (suffixProduct[i + 1] * nums[i + 1]);
            }
        }
        for(int i = 0; i < n; i++){
            res.push_back(prefixProduct[i] * suffixProduct[i]);
        }
        return res;
    }
};
