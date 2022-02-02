class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = INT_MIN, MX = INT_MIN;
        for (int i = prices.size()-1; i >= 0; i--){
            if (MX < prices[i]) {
                MX = prices[i];
            }else {
                ans = max (ans, abs(MX - prices[i]));
            }
        }
        return max(0, ans);
    }
};