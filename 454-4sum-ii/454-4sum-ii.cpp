class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        map<int, int> st;
        int c = 0;
        for (int p = 0; p < nums1.size(); p++) {
            for (int i = 0; i < nums2.size(); i++) {
                st[nums1[p] + nums2[i]]++;
            }
        }
        for (int p = 0; p < nums3.size(); p++) {
            for (int i = 0; i < nums4.size(); i++) {
                int sum = nums3[p] + nums4[i];
                if (st.count(sum * - 1)) c += st[sum * - 1];
            }
        }
        return c;
    }
};