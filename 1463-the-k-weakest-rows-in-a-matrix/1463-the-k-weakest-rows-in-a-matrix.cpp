class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size(), m = mat[0].size();
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < m; j++) {
                cnt += mat[i][j];
            }
            a[i] = make_pair(cnt, i);
        }
        sort(a.begin(), a.end(), [&](pair<int, int> p1, pair<int, int> p2) {
            if (p1.first == p2.first) {
                return p1.second < p2.second;
            }
            return p1.first < p2.first;
        });
        vector<int> ans(k);
        for (int i = 0; i < k; i++)
            ans[i] = a[i].second;
        return ans;
    }
};