class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int test = nums.size();
        for (int i = 0; i < test; ++i) {
            for (int j = i + 1; j < test; ++j) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
