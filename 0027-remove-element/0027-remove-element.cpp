class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int first=0,second=nums.size()-1;
       while(first<=second){
        if(nums[first]!=val)
            first++;
        else{
            if(nums[second]==val)
              second--;
            else{
                swap(nums[first],nums[second]);
                first++,second--;
            }
        }
       }

       return first;
    }
};