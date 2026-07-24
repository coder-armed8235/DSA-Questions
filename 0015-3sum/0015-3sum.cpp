class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<n-2;i++){

            while(i>0 && i<n-2 && nums[i]==nums[i-1])
            i++;
            int target=0-nums[i];
            int start=i+1,end=n-1;

            while(start<end){
                if(nums[start]+nums[end]==target)
                {
                    ans.push_back({nums[i],nums[start],nums[end]});
                    start++,end--;

                    while(start<end && nums[start]==nums[start-1])
                        start++;

                    while(end>start && nums[end]==nums[end+1])
                        end--;
                }

            else if(nums[start]+nums[end]<target)
                start++;

            else
                end--;
            }
        }

        return ans;
    }
};