class Solution {
public:
//  [2,0,2,1,1,0]

// // we need to sort  first track down the red color=0
//  second track down white=1;
//  third track down to blue=2

//    [0,0,1,1,2,2]      if(j==2) swap with k
    //    [0,0,1,1,2,2]                 //  if(j==0)  swap with i
//             i  k
//             j
//   while(j<k){
//       loop will be execute
//   }

    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0,k=n-1;
        while(j<=k){
            if(nums[j]==2){
                swap(nums[j],nums[k]);
                k--;
            }
            else{
                if(nums[j]==0){
                    swap(nums[j],nums[i]);
                    i++,j++;
                }
                else{
                    j++;
                }
            }
        }
    }
};