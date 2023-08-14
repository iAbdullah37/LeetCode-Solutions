class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int ans = - 1;
        while(low <= high) {
            int mid = (high + low) / 2;
            if (nums[mid] == target) {
                ans = mid;
                break;
            }
            if (nums[mid] < target) {
                low = mid + 1;
            }else {
                high = mid - 1;
            }
        }
        if (ans > -1) return ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > target) return i;
        }
        return (int)nums.size();
    }
};