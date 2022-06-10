class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> ind;
        int cur = 0, ans = 0, i = 0;
        for (;i < s.size(); i++) {
            if (ind.count(s[i])) {
                ans = max(ans, i - cur);
                cur = max(cur, ind[s[i]] + 1);
            }else {
                ans = max(ans, i - cur);
            }
            ind[s[i]] = i;
        }
        ans = max(ans, i - cur);
        return ans;
        
    }
};