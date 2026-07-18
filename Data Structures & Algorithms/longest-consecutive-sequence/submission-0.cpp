class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int curr = 1;
        int ans = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                continue;
            } 
            else if (nums[i] == nums[i - 1] + 1) {
                curr++;
            } 
            else {
                ans = max(ans, curr);
                curr = 1;
            }
        }

        return max(ans, curr);
    }
};