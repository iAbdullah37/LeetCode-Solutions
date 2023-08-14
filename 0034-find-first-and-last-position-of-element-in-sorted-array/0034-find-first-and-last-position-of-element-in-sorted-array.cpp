class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        const int fi = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        const int li = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        if (nums.size() == 1 && target == *nums.begin()) return vector<int> {0, 0};
        if (fi == li) {
            return vector<int>{-1, -1};
        }
        if (fi - 1 >= 0 && nums[li - 1] != target) {
            return vector<int> {fi, fi};
        }else {
            return vector<int> {fi, li - 1};
        }
    }
};