class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int m = nums.size();
        for (int i = 0; i < 1 << m; i++) {
            vector<int> a;
            for (int j = 0; j < m; j++) {
                if (i & (1<<j)) {
                    a.push_back(nums[j]);
                }
            }
            ans.push_back(a);
        }
        return ans;
    }
};