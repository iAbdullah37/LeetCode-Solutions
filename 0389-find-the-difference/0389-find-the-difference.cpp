class Solution {
public:
    char findTheDifference(string s, string t) {
        int a[28] = {0}, b[28] = {0};
        for (auto & i : s) {
            a[i - 'a']++;
        }
        for (auto & i : t) {
            b[i - 'a']++;
        }
        char ans;
        for (int i = 0; i < 28; i++){
            if (a[i] != b[i]) ans = 'a' + i;
        }
        return ans;
    }
};