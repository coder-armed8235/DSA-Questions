class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        if(nums.empty()) return 0;

        vector<int> dp;

        dp.push_back(nums[0]);

        for(int i = 1; i < nums.size(); i++) {

            int start = 0;
            int end = dp.size() - 1;

            int index = dp.size();

            while(start <= end) {

                int mid = start + (end - start) / 2;

                if(dp[mid] < nums[i]) {
                    start = mid + 1;
                }
                else {
                    index = mid;
                    end = mid - 1;
                }
            }

            if(index == dp.size()) {
                dp.push_back(nums[i]);
            }
            else {
                dp[index] = nums[i];
            }
        }

        return dp.size();
    }
};