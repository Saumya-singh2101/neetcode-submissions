class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int>ans;
        for(int left=0;left+k<=nums.size();left++){
            int right=left+k-1;
            int maxi=INT_MIN;
            for(int i=left;i<=right;i++){
                    maxi=max(maxi,nums[i]);
                    
                }
                ans.push_back(maxi);
            }
        return ans;
    }
};
