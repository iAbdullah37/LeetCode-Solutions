class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1, ans = nums[0];
        while (l<r)
        {
            if (r == l)
            {
                ans = nums[l];
            }
        int mid = (l + r) / 2; 
        if (mid < r && nums[mid + 1] < nums[mid])
        {
            ans = nums[mid + 1];
        }
        if (mid > l&& nums[mid] < nums[mid - 1])
        {
          ans=nums[mid];
          break;
        }
        if (nums[r] > nums[mid])
            r = mid - 1;
        else l = mid + 1;
    }
        return ans;
    }
};