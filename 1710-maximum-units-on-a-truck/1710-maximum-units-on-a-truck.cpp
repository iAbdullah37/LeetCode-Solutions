class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [&](vector<int> v1, vector<int> v2){
            return v1[1] > v2[1];
        });
        int ans = 0;
        for (auto id : boxTypes) {
            if (truckSize > 0) {
                ans +=  min(truckSize * id[1] ,id[0] * id[1]);
                truckSize -= min(truckSize ,id[0]);
            }
        }
        return ans;
    }
};