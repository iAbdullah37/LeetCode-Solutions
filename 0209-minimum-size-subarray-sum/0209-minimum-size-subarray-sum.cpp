class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int ans = INT_MAX;
      vector<int> pref((int)(nums.size() + 1), 0);
      for (int i = 1; i <= nums.size(); i++) {
        pref[i] = pref[i-1] + nums[i-1];
      }
      for (int i = 0; i < nums.size(); i++) {
        int it = lower_bound(pref.begin(), pref.end(), pref[i] + target) - pref.begin();
        if (it != (int)pref.size()) {
          ans = min(ans, it - i);
        }
      }
      return (ans == INT_MAX ? 0 : ans);
    }
};