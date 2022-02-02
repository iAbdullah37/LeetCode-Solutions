class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = INT_MIN, MAX = INT_MIN;
        for (int i = prices.size()-1; i >= 0; i--){
            if (MAX < prices[i]) {
                MAX = prices[i];
            }else {
                ans = max (ans, abs(MAX - prices[i]));
            }
        }
        return max(0, ans);
    }
};