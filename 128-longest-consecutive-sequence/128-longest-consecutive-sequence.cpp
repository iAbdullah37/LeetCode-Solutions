class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        for (auto &i : nums) st.insert(i);
        int ind = *st.begin(), cur = 0, ans = 0;
        for (auto &i : st) {
            if (ind == i) cur++;
            else{ 
                ans = max(cur, ans);
                cur = 1;
                ind = i;
            }
            ind++;
            cout << cur << endl;
        }
        
        return max(cur, ans);;
    }
};