class Solution {
public:
    bool checkIfPangram(string s) {
        int a[26] = {0};
        for (int i = 0; i < s.size(); i++) {
            a[s[i] - 'a'] = 1;
        }
        int ans = 0;
        for (int i = 0; i < 26; i++) {
            ans += a[i];
        }
        return (ans == 26);
    }
};