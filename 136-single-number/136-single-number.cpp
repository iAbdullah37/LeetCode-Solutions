class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> count;
        for (auto id : nums) {
            count[id]++;
        }
        for (auto id : count) {
            if (id.second == 1) 
                return id.first;
        }
        return -1;
    }
};