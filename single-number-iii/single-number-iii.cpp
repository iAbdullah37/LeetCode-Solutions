class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int> mp;
        vector<int> ans(2);
        int id = 0;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        for (int i = 0; i< nums.size(); i++) {
            if (mp[nums[i]] == 1) {
                ans[id] = nums[i];
                id++;
            }
        }
        return ans;
    }
};
